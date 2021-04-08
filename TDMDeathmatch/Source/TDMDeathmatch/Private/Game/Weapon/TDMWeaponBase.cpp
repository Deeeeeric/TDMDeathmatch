// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMWeaponBase.h"
#include "Game/Weapon/TDMProjectileBase.h"
#include "Player/TDMPlayerState.h"
#include "Player/TDMCharacterBase.h"

#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
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
}

// Called when the game starts or when spawned
void ATDMWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	BurstFireShot = BurstFireAmount;
	MagazineAmmo = MagazineCapacity;

	if (FireModes.Num())
	{
		FireMode = FireModes[FireModesIndex];
	}

	GetWorldTimerManager().SetTimer(TFullAutoHandle, this, &ATDMWeaponBase::Fire, 0.1, true);
	GetWorldTimerManager().PauseTimer(TFullAutoHandle);

}

void ATDMWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ATDMWeaponBase, MagazineAmmo, COND_OwnerOnly);
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
			AnimInstance = Player->GetMesh1P()->GetAnimInstance(); //change when third person setup
		}

		if (AnimInstance)
		{
			if (IsLocalPlayer)
			{
				AnimInstance->Montage_Play(FirstPersonMontage);
			}
			else
			{
				//play third person montage
			}
			AnimInstance->Montage_Play(FirstPersonMontage);
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

void ATDMWeaponBase::PerformHit(FHitResult HitResult)
{
	OnHit(HitResult);

	if (AActor* HitActor = HitResult.GetActor()) // Replicate on server
	{
		if (ATDMCharacterBase* ShotPlayer = Cast<ATDMCharacterBase>(HitActor))
		{
			// Spawn effects
			if (GetWorld()->IsServer())
			{
				if (AActor* CurrentWeapon = GetOwner())
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

bool ATDMWeaponBase::LineTrace(FVector SpawnLocation, FRotator SpawnRotation)
{
	FVector EndLocation = SpawnLocation + SpawnRotation.Vector() * 500.0f;
	DrawDebugLine(GetWorld(), SpawnLocation, EndLocation, FColor::Blue, false, 3.0f, 0, 3.0f);

	FHitResult HitResult;
	/*Ignore player and current weapon when run and shoot so we don't accidentally collide with the projectile on fire*/
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(GetOwner());
	/*Use QueryParams to perform physics material*/
	QueryParams.bReturnPhysicalMaterial = true;

	if (GetWorld()->LineTraceSingleByChannel(HitResult, SpawnLocation, EndLocation, ECollisionChannel::ECC_Visibility, QueryParams))
	{
		//Play effects on hit location
		PerformHit(HitResult);
		return true;
	}
	return false;
}

bool ATDMWeaponBase::Server_Fire_Validate(FVector SpawnLocation, FRotator SpawnRotation)
{
	return true;
}

void ATDMWeaponBase::Server_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation)
{
	if (MagazineAmmo > 0)
	{
		--MagazineAmmo;
		Multi_Fire(SpawnLocation, SpawnRotation);
	}
}

bool ATDMWeaponBase::Multi_Fire_Validate(FVector SpawnLocation, FRotator SpawnRotation)
{
	return true;
}

void ATDMWeaponBase::Multi_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation)
{
	if (APawn* Character = Cast<APawn>(GetOwner()))
	{
		if (Character->IsLocallyControlled())
		{
			return;
		}
	}
	PlayFireAnimation(false);

	if (LineTrace(SpawnLocation, SpawnRotation))
	{
		return;
	}

	FVector EndOfLineTrace = SpawnLocation + SpawnRotation.Vector() * 500.0f;
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ATDMProjectileBase* Projectile = GetWorld()->SpawnActor<ATDMProjectileBase>(ProjectileClass, EndOfLineTrace, SpawnRotation, SpawnParams);
}

void ATDMWeaponBase::Fire()
{
	if (MagazineAmmo > 0)
	{
		PlayFireAnimation(true);
		--MagazineAmmo;

		bool LineTraceHit = false;
		FVector SpawnLocation = WeaponMesh->GetSocketLocation(FName("Muzzle"));
		FRotator SpawnRotation = WeaponMesh->GetSocketRotation(FName("Muzzle"));

		LineTraceHit = LineTrace(SpawnLocation, SpawnRotation);
		if (!LineTraceHit)
		{
			FVector EndOfLineTrace = SpawnLocation + SpawnRotation.Vector() * 500.0f;

			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			if (ATDMProjectileBase* Projectile = GetWorld()->SpawnActor<ATDMProjectileBase>(ProjectileClass, EndOfLineTrace, SpawnRotation, SpawnParams))
			{
				UE_LOG(LogTemp, Warning, TEXT("Firing projectile"));
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
			if (BurstFireShot-1 > 0)
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

		if (!HasAuthority())
		{
			Server_Fire(SpawnLocation, SpawnRotation);
		}
		else
		{
			Multi_Fire(SpawnLocation, SpawnRotation);
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

