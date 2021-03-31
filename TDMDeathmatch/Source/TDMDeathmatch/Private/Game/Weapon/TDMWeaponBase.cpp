// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMWeaponBase.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ATDMWeaponBase::ATDMWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComponent"));
	RootComponent = WeaponMesh;
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
	UE_LOG(LogTemp, Warning, TEXT("Server_Fire_Implementation"));
	Multi_Fire(SpawnLocation, SpawnRotation);
}

bool ATDMWeaponBase::Multi_Fire_Validate(FVector SpawnLocation, FRotator SpawnRotation)
{
	return true;
}

void ATDMWeaponBase::Multi_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation)
{
	UE_LOG(LogTemp, Warning, TEXT("Multi_Fire_Implementation"));
}

void ATDMWeaponBase::Fire()
{
	FVector SpawnLocation = WeaponMesh->GetSocketLocation(FName("MuzzleLocation"));
	FRotator SpawnRotation = WeaponMesh->GetSocketRotation(FName("MuzzleLocation"));

	if (HasAuthority())
	{
		Server_Fire(SpawnLocation, SpawnRotation);
		// Spawn everything on client
	}
	else
	{
		Multi_Fire(SpawnLocation, SpawnRotation);
	}
}


