// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TDMCharacterBase.h"
#include "Game/Weapon/TDMProjectileBase.h"
#include "Game/Weapon/TDMWeaponBase.h"
#include "Game/GameMode/TDMGameModeBase.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ATDMCharacterBase::ATDMCharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	Health = 100.0f;
	bIsDead = false;
	bIsAiming = false;
	bFOVFinished = false;
}

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

void ATDMCharacterBase::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	Mesh1P->SetHiddenInGame(false, true);

	if (HasAuthority())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		WeaponInHand = GetWorld()->SpawnActor<ATDMWeaponBase>(WeaponToSpawn, SpawnParams);

		if (WeaponInHand)
		{
			WeaponInHand->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("ik_hand_gun"));
		}
	}

	if (IsLocallyControlled())
	{
		PrimaryActorTick.SetTickFunctionEnable(true);
	}
	else
	{
		PrimaryActorTick.SetTickFunctionEnable(false);
	}
}

void ATDMCharacterBase::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATDMCharacterBase::OnFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ATDMCharacterBase::StopFire);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ATDMCharacterBase::StartAiming);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &ATDMCharacterBase::StopAiming);

	PlayerInputComponent->BindAction("FireMode", IE_Pressed, this, &ATDMCharacterBase::SwitchFireMode);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ATDMCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATDMCharacterBase::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ATDMCharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ATDMCharacterBase::LookUpAtRate);
}

void ATDMCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ATDMCharacterBase, WeaponInHand);
	DOREPLIFETIME(ATDMCharacterBase, bIsDead);
	DOREPLIFETIME_CONDITION(ATDMCharacterBase, bIsAiming, COND_SkipOwner);
}

float ATDMCharacterBase::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	if (bIsDead) { return 0.0f; }

	if (HasAuthority())
	{
		Health -= DamageAmount; //Adjust health when taking damage

		//Health Logic
		if (Health > 0)
		{
			return ActualDamage;
		}
		else
		{//We are dead
			bIsDead = true;
			OnRep_IsDead();
			if (ATDMGameModeBase* GM = GetWorld()->GetAuthGameMode<ATDMGameModeBase>())
			{
				GM->PlayerKilled(Cast<ATDMCharacterBase>(DamageCauser), this);

			}
		}
	}
	return ActualDamage;
}

void ATDMCharacterBase::OnRep_IsDead()
{
	if (HasAuthority())
	{
		FTimerHandle HandleTimer;
		GetWorldTimerManager().SetTimer(HandleTimer, this, &ATDMCharacterBase::DestroyCharacter, 1.0f, false);
	}
}

void ATDMCharacterBase::DestroyCharacter()
{
	if (WeaponInHand) { WeaponInHand->Destroy(); }
	Destroy();
}

void ATDMCharacterBase::OnFire()
{
	if (WeaponInHand)
	{
		WeaponInHand->Fire();
	}
}

void ATDMCharacterBase::StopFire()
{
	if (WeaponInHand)
	{
		WeaponInHand->StopFire();
	}
}

void ATDMCharacterBase::StartAiming()
{
	bIsAiming = true;
	bFOVFinished = false;
	if (!HasAuthority())
	{
		Server_Aim(bIsAiming);
	}
}

void ATDMCharacterBase::StopAiming()
{
	bIsAiming = false;
	bFOVFinished = false;
	if (!HasAuthority())
	{
		Server_Aim(bIsAiming);
	}
}

void ATDMCharacterBase::SwitchFireMode()
{
	if (WeaponInHand)
	{
		WeaponInHand->SwitchFireMode();
	}
}

bool ATDMCharacterBase::Server_Aim_Validate(bool Aiming)
{
	return true;
}

void ATDMCharacterBase::Server_Aim_Implementation(bool Aiming)
{
	bIsAiming = Aiming;
}

void ATDMCharacterBase::HandleAimFOV(float DeltaSeconds)
{
	if (!bFOVFinished)
	{
		if (bIsAiming)
		{
			float NewFOV = FMath::FInterpConstantTo(FirstPersonCameraComponent->FieldOfView, 70.0f, DeltaSeconds, 90.0f);
			FirstPersonCameraComponent->SetFieldOfView(NewFOV);
			if (NewFOV == 70.0f)
			{
				bFOVFinished = true;
			}
		}
		else
		{
			float NewFOV = FMath::FInterpConstantTo(FirstPersonCameraComponent->FieldOfView, 90.0f, DeltaSeconds, 90.0f);
			FirstPersonCameraComponent->SetFieldOfView(NewFOV);
			if (NewFOV == 90.0f)
			{
				UE_LOG(LogTemp, Warning, TEXT("FOV Finished"));
				bFOVFinished = true;
			}
		}
	}
}

void ATDMCharacterBase::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ATDMCharacterBase::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ATDMCharacterBase::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ATDMCharacterBase::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ATDMCharacterBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	HandleAimFOV(DeltaSeconds);
}