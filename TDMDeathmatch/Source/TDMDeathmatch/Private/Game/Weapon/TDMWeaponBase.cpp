// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMWeaponBase.h"
#include "Game/Weapon/TDMProjectileBase.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ATDMWeaponBase::ATDMWeaponBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComponent"));
	RootComponent = WeaponMesh;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ATDMWeaponBase::BeginPlay()
{
	Super::BeginPlay();

}

bool ATDMWeaponBase::Server_Fire_Validate(FVector SpawnLocation, FRotator SpawnRotation)
{
	return true;
}

void ATDMWeaponBase::Server_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation)
{
	Multi_Fire(SpawnLocation, SpawnRotation);
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

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ATDMProjectileBase* Projectile = GetWorld()->SpawnActor<ATDMProjectileBase>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
}

void ATDMWeaponBase::Fire()
{
	FVector SpawnLocation = WeaponMesh->GetSocketLocation(FName("Muzzle"));
	FRotator SpawnRotation = WeaponMesh->GetSocketRotation(FName("Muzzle"));

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if (ATDMProjectileBase* Projectile = GetWorld()->SpawnActor<ATDMProjectileBase>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams))
	{
	
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


