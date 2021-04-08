// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDMWeaponBase.generated.h"

class ATDMProjectileBase;
class USkeletalMeshComponent;
class UAnimMontage;
class UAnimationAsset;

UENUM(BlueprintType)
enum class EFireMode : uint8
{
	Semi	UMETA(DisplayName, "Semi-Auto"),
	Full	UMETA(DisplayName, "Full-Auto")
};

UCLASS()
class TDMDEATHMATCH_API ATDMWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATDMWeaponBase();

protected:
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<ATDMProjectileBase> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<TEnumAsByte<EFireMode>> FireModes;
		
		int8 FireModesIndex;

		TEnumAsByte<EFireMode> FireMode;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimationAsset* FireAnimation;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimMontage* FirstPersonMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<FName> ADSFireNames;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<FName> HipFireNames;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		int32 MagazineCapacity;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		int32 TotalAmmoCapacity;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Weapon")
		int32 MagazineAmmo;

	UFUNCTION(BlueprintImplementableEvent, Category = "Weapon")
		void OnHit(FHitResult HitResult);

	void PlayFireAnimation(bool IsLocalPlayer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PerformHit(FHitResult HitResult);
	bool LineTrace(FVector SpawnLocation, FRotator SpawnRotation);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_Fire(FVector SpawnLocation, FRotator SpawnRotation);
	bool Server_Fire_Validate(FVector SpawnLocation, FRotator SpawnRotation);
	void Server_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
		void Multi_Fire(FVector SpawnLocation, FRotator SpawnRotation);
	bool Multi_Fire_Validate(FVector SpawnLocation, FRotator SpawnRotation);
	void Multi_Fire_Implementation(FVector SpawnLocation, FRotator SpawnRotation);

public:
	void Fire();
	void StopFire();
	void SwitchFireMode();
};
