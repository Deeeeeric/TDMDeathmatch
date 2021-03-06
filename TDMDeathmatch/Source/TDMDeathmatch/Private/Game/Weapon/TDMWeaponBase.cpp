// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMWeaponBase.h"
#include "Game/Weapon/TDMProjectileBase.h"
#include "Player/TDMPlayerState.h"
#include "Player/TDMCharacterBase.h"
#include "Game/Weapon/TDMAttachment.h"
#include "Game/Weapon/TDMAttachment_Optic.h"

#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ATDMWeaponBase::ATDMWeaponBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComponent"));
	RootComponent = WeaponMesh;

	SetReplicates(true);

	TotalAmmoCapacity = 100;
	MagazineCapacity = 15;
	MagazineAmmo = MagazineCapacity;
	FireModesIndex = 0;
	BurstFireAmount = 3;
	BurstFireShot = 0;
	FireRate = 500.0f;

	bWeaponActive = true;

	CameraFOV = 75.0;
	CameraFOVSpeed = 100.0f;
}

// Called when the game starts or when spawned
void ATDMWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	CurrentAmmoRemaining = TotalAmmoCapacity;
	MagazineAmmo = MagazineCapacity;

	FireRate = 60 / FireRate;
}

void ATDMWeaponBase::Destroyed()
{
	Super::Destroyed();
	if (Optic) { Optic->Destroy(); }
	if (Muzzle) { Muzzle->Destroy(); }
}

void ATDMWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ATDMWeaponBase, MagazineAmmo, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ATDMWeaponBase, CurrentAmmoRemaining, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ATDMWeaponBase, Optic, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ATDMWeaponBase, Muzzle, COND_OwnerOnly);
}

void ATDMWeaponBase::FirearmInHand()
{
	BurstFireShot = BurstFireAmount;
	MagazineAmmo = MagazineCapacity;

	if (FireModes.Num())
	{
		FireMode = FireModes[FireModesIndex];
	}

	GetWorldTimerManager().SetTimer(TFullAutoHandle, this, &ATDMWeaponBase::Fire, FireRate, true);
	GetWorldTimerManager().PauseTimer(TFullAutoHandle);
}

void ATDMWeaponBase::PlayFireAnimation(bool IsLocalPlayer)
{
	if (FireAnimation)
	{
		WeaponMesh->PlayAnimation(FireAnimation, false);
	}
	if (ATDMCharacterBase* Player = Cast<ATDMCharacterBase>(GetOwner()))
	{
		UAnimInstance* AnimInstance = nullptr;
		if (IsLocalPlayer)
		{
			AnimInstance = Player->GetMesh1P()->GetAnimInstance();
		}
		else
		{
			AnimInstance = Player->GetMesh()->GetAnimInstance(); //change when third person setup
		}

		if (AnimInstance)
		{
			if (IsLocalPlayer)
			{
				AnimInstance->Montage_Play(FirstPersonMontage);
			}
			else
			{
				AnimInstance->Montage_Play(ThirdPersonMontage);
			}
			if (Player->GetIsAiming())
			{
				if (ADSFireNames.Num())
				{
					int SelectedIndex = FMath::RandRange(0, ADSFireNames.Num() - 1);
					FName Selected = ADSFireNames[SelectedIndex];
					AnimInstance->Montage_JumpToSection(FName(Selected));
				}
			}
			else
			{
				if (HipFireNames.Num())
				{
					int SelectedIndex = FMath::RandRange(0, HipFireNames.Num() - 1);
					FName Selected = HipFireNames[SelectedIndex];
					AnimInstance->Montage_JumpToSection(FName(Selected));
				}
			}
		}
	}
}

void ATDMWeaponBase::PerformEffects(FHitResult HitResult)
{
	EPhysicalSurface Surface = UPhysicalMaterial::DetermineSurfaceType(HitResult.PhysMaterial.Get());
	switch (Surface)
	{
	case EPhysicalSurface::SurfaceType1: //Flesh
	{
		if (NS_Flesh)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NS_Flesh, HitResult.Location);
		}
		if (SB_Flesh)
		{
			UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SB_Flesh, HitResult.Location);
		}
		break;
	}
	case EPhysicalSurface::SurfaceType2: //Metal
	{
		if (NS_Metal)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NS_Metal, HitResult.Location);
		}
		if (SB_Metal)
		{
			UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SB_Metal, HitResult.Location);
		}
		break;
	}
	case EPhysicalSurface::SurfaceType3: //Wood
	{
		if (NS_Wood)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NS_Wood, HitResult.Location);
		}
		if (SB_Wood)
		{
			UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SB_Wood, HitResult.Location);
		}
		break;
	}
	default:
	{
		if (NS_Default)
		{
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NS_Default, HitResult.Location);
		}
		if (SB_Default)
		{
			UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SB_Default, HitResult.Location);
		}
		break;
	}
	}
}

void ATDMWeaponBase::PerformHit(FHitResult HitResult)
{
	OnHit(HitResult);

	PerformEffects(HitResult);

	if (AActor* HitActor = HitResult.GetActor()) // Replicate on server
	{
		if (ATDMCharacterBase* ShotPlayer = Cast<ATDMCharacterBase>(HitActor))
		{
			if (GetWorld()->IsServer())
			{
				if (AActor* OwningWeapon = GetOwner())
				{
					if (ATDMCharacterBase* Shooter = Cast<ATDMCharacterBase>(GetOwner()))
					{//Make sure a player is valid before we call the function IsOnSameTeam
						if (Shooter->GetPlayerState<ATDMPlayerState>() && !Shooter->GetPlayerState<ATDMPlayerState>()->IsOnSameTeam(ShotPlayer))
						{//Player not on the same team will take damage
							ShotPlayer->TakeDamage(20.0f, FDamageEvent(), nullptr, Shooter);
						}
					}
				}
			}
		}
	}
}

bool ATDMWeaponBase::PerformLineTrace(FVector SpawnLocation, FRotator SpawnRotation)
{
	FVector EndLocation = SpawnLocation + SpawnRotation.Vector() * 500.0f;
	//DrawDebugLine(GetWorld(), SpawnLocation, EndLocation, FColor::Red, false, 3.0f, 0, 3.0f);

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(GetOwner());
	QueryParams.bReturnPhysicalMaterial = true;

	if (GetWorld()->LineTraceSingleByChannel(HitResult, SpawnLocation, EndLocation, ECollisionChannel::ECC_Visibility, QueryParams))
	{
		// PLAY EFFECTS ON HIT LOCATION
		if (HitResult.GetActor())
		{
			UE_LOG(LogTemp, Warning, TEXT("Hit Actor %s"), *HitResult.GetActor()->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("HIT ACTOR INVALID BUT STILL BLOCKING HIT"));
		}
		PerformHit(HitResult);
		return true;
	}
	return false;
}

bool ATDMWeaponBase::Server_Fire_Validate(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector)
{
	return true;
}

void ATDMWeaponBase::Server_Fire_Implementation(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector)
{
	if (MagazineAmmo > 0)
	{
		--MagazineAmmo;
		Multi_Fire(SpawnLocation, MuzzleRotationVector);
	}
}

bool ATDMWeaponBase::Multi_Fire_Validate(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector)
{
	return true;
}

void ATDMWeaponBase::Multi_Fire_Implementation(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector)
{
	if (APawn* Character = Cast<APawn>(GetOwner()))
	{
		if (Character->IsLocallyControlled()) { return; }
	}

	PlayFireAnimation(false);

	FRotator SpawnRotation = FRotator(MuzzleRotationVector.X, MuzzleRotationVector.Y, MuzzleRotationVector.Z);

	if (PerformLineTrace(SpawnLocation, SpawnRotation))
	{
		return;
	}

	FVector EndOfTraceLocation = SpawnLocation + SpawnRotation.Vector() * 500.0f;
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ATDMProjectileBase* Projectile = GetWorld()->SpawnActor<ATDMProjectileBase>(ProjectileClass, EndOfTraceLocation, SpawnRotation, SpawnParams);
}

void ATDMWeaponBase::Fire()
{
	if (bWeaponActive && MagazineAmmo > 0)
	{
		PlayFireAnimation(true);

		if (ATDMCharacterBase* Character = Cast<ATDMCharacterBase>(GetOwner()))
		{
			if (FireCameraShakes.Num())
			{
				int RandomIndex = FMath::RandRange(0, FireCameraShakes.Num() - 1);
				Character->PlayCameraShake(FireCameraShakes[RandomIndex]);
			}

			--MagazineAmmo;
			Character->WeaponAmmoChanged(this);

			FVector SpawnLocation = WeaponMesh->GetSocketLocation(FName("Muzzle"));
			FRotator SpawnRotation = WeaponMesh->GetSocketRotation(FName("Muzzle"));
			bool LineTraceMadeHit = false;

			LineTraceMadeHit = PerformLineTrace(SpawnLocation, SpawnRotation);

			if (!LineTraceMadeHit)
			{
				FVector EndOfTraceLocation = SpawnLocation + SpawnRotation.Vector() * 500.0f;

				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				if (ATDMProjectileBase* Projectile = GetWorld()->SpawnActor<ATDMProjectileBase>(ProjectileClass, EndOfTraceLocation, SpawnRotation, SpawnParams))
				{
					UE_LOG(LogTemp, Warning, TEXT("FIRING PROJECTILE"));
				}
			}

			if (FireMode == EFireMode::Full)
			{//Handle Full-Auto Logic
				GetWorldTimerManager().UnPauseTimer(TFullAutoHandle);
			}
			switch (FireMode)
			{
			case EFireMode::Full:
			{
				GetWorldTimerManager().UnPauseTimer(TFullAutoHandle);
				break;
			}

			case EFireMode::Burst:
			{
				GetWorldTimerManager().UnPauseTimer(TFullAutoHandle);
				if (BurstFireShot - 1 > 0)
				{
					--BurstFireShot;
				}
				else
				{
					GetWorldTimerManager().PauseTimer(TFullAutoHandle);
					BurstFireShot = BurstFireAmount;
				}
			}
			}
			FVector_NetQuantize10 MuzzleRotationVector = FVector_NetQuantize10(SpawnRotation.Pitch, SpawnRotation.Yaw, SpawnRotation.Roll);
			if (!HasAuthority())
			{
				Server_Fire(FVector_NetQuantize10(SpawnLocation), MuzzleRotationVector);
			}
			else
			{
				Multi_Fire(FVector_NetQuantize10(SpawnLocation), MuzzleRotationVector);
			}
		}
	}
	else
	{
		GetWorldTimerManager().PauseTimer(TFullAutoHandle);
	}
}

void ATDMWeaponBase::StopFire()
{
	GetWorldTimerManager().PauseTimer(TFullAutoHandle);

}

bool ATDMWeaponBase::Server_Reload_Validate()
{
	return true;
}

void ATDMWeaponBase::Server_Reload_Implementation()
{
	int32 AmmoDifference = MagazineCapacity - MagazineAmmo;

	int32 ClampAmmo = FMath::Clamp(AmmoDifference, 0, CurrentAmmoRemaining);

	CurrentAmmoRemaining -= ClampAmmo;
	MagazineAmmo += ClampAmmo;

	Multi_Reload();
}

bool ATDMWeaponBase::Multi_Reload_Validate()
{
	return true;
}

void ATDMWeaponBase::Multi_Reload_Implementation()
{
	if (ATDMCharacterBase* Character = Cast<ATDMCharacterBase>(GetOwner()))
	{
		if (!Character->IsLocallyControlled())
		{
			PlayReloadAnimation(false);
		}
	}
}

void ATDMWeaponBase::Reload()
{
	int32 AmmoDifference = MagazineCapacity - MagazineAmmo;

	int32 ClampAmmo = FMath::Clamp(AmmoDifference, 0, CurrentAmmoRemaining);

	if (ClampAmmo > 0)
	{
		bWeaponActive = false;
		PlayReloadAnimation(true);
		CurrentAmmoRemaining -= ClampAmmo;
		MagazineAmmo += ClampAmmo;

		if (HasAuthority())
		{
			Multi_Reload();
		}
		else
		{
			Server_Reload();
		}
	}
}

void ATDMWeaponBase::PlayReloadAnimation(bool IsLocalPlayer)
{
	if (MagazineAmmo > 0)
	{
		if (IsLocalPlayer && ReloadAnimation)
		{
			WeaponMesh->PlayAnimation(ReloadAnimation, false);
		}
	}
	else if (MagazineAmmo == 0)
	{
		WeaponMesh->PlayAnimation(ReloadEmptyAnimation, false);
	}

	if (ATDMCharacterBase* Player = Cast<ATDMCharacterBase>(GetOwner()))
	{
		UAnimInstance* AnimInstance = nullptr;
		if (IsLocalPlayer)
		{
			AnimInstance = Player->GetMesh1P()->GetAnimInstance();
		}
		else
		{
			AnimInstance = Player->GetMesh()->GetAnimInstance();
		}

		if (AnimInstance)
		{
			if (IsLocalPlayer)
			{
				AnimInstance->Montage_Play(FirstPersonMontage);
			}
			else
			{
				AnimInstance->Montage_Play(ThirdPersonMontage);
			}

			if (MagazineAmmo == 0)
			{
				if (IsLocalPlayer)
				{
					WeaponMesh->PlayAnimation(ReloadEmptyAnimation, false);
				}
				else
				{
					WeaponMesh->PlayAnimation(TPPReloadEmptyAnimation, false);
				}
				AnimInstance->Montage_JumpToSection(FName("ReloadEmpty"));
			}
			else
			{
				if (IsLocalPlayer)
				{
					WeaponMesh->PlayAnimation(ReloadAnimation, false);
				}
				else
				{
					WeaponMesh->PlayAnimation(TPPReloadAnimation, false);
				}
				AnimInstance->Montage_JumpToSection(FName("Reload"));
			}
		}
	}
}

void ATDMWeaponBase::ActivateWeapon()
{
	bWeaponActive = true;

	if (ATDMCharacterBase* Character = Cast<ATDMCharacterBase>(GetOwner()))
	{
		Character->WeaponAmmoChanged(this);
	}

}

void ATDMWeaponBase::SwitchFireMode()
{
	if (FireModesIndex + 1 >= FireModes.Num())
	{
		FireModesIndex = 0;
	}
	else
	{
		++FireModesIndex;
	}

	UE_LOG(LogTemp, Warning, TEXT("Firemode index %d"), FireModesIndex);

	FireMode = FireModes[FireModesIndex];
}

bool ATDMWeaponBase::Server_AddAttachment_Validate(TSubclassOf<ATDMAttachment> AttachmentClass)
{
	return true;
}

void ATDMWeaponBase::Server_AddAttachment_Implementation(TSubclassOf<ATDMAttachment> AttachmentClass)
{
	if (AttachmentClass)
	{
		if (ATDMAttachment* Attachment = GetWorld()->SpawnActor<ATDMAttachment>(AttachmentClass))
		{
			if (Attachment->GetAttachmentType() == EAttachmentType::Optic)
			{
				if (Optic)
				{
					Optic->Destroy();
				}
				Optic = Cast<ATDMAttachment_Optic>(Attachment);
			}
			else if (Attachment->GetAttachmentType() == EAttachmentType::Muzzle)
			{
				if (Muzzle)
				{
					Muzzle->Destroy();
				}
				Muzzle = Attachment;
			}
			Attachment->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, Attachment->GetAttachmentSocket());
		}
	}
}

void ATDMWeaponBase::AddAttachment(TSubclassOf<ATDMAttachment> AttachmentClass)
{
	if (AttachmentClass)
	{
		Server_AddAttachment(AttachmentClass);
	}
}
float ATDMWeaponBase::GetCameraFOV()
{
	if (Optic)
	{
		return Optic->GetCameraFOV();
	}
	return CameraFOV;
}

float ATDMWeaponBase::GetCameraFOVSpeed()
{
	if (Optic)
	{
		return Optic->GetCameraFOVSpeed();
	}
	return CameraFOVSpeed;
}

