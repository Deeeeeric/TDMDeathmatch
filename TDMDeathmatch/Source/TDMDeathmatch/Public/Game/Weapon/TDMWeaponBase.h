// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDMWeaponBase.generated.h"

class ATDMProjectileBase;
class USkeletalMeshComponent;
class UAnimMontage;
class UAnimationAsset;
class ATDMAttachment;
class ATDMAttachment_Optic;
class UNiagaraSystem;
class USoundBase;

UENUM(BlueprintType)
enum class EFireMode : uint8
{
	Semi	UMETA(DisplayName, "Semi-Auto"),
	Burst	UMETA(DisplayName, "Burst"),
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
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<ATDMProjectileBase> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		USkeletalMeshComponent* WeaponMesh;

	UFUNCTION(BlueprintImplementableEvent, Category = "Weapon")
		void OnHit(FHitResult HitResult);

	/********************* EFFECTS *********************/
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UNiagaraSystem* NS_Default;
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UNiagaraSystem* NS_Flesh;
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UNiagaraSystem* NS_Metal;
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UNiagaraSystem* NS_Wood;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		USoundBase* SB_Default;
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		USoundBase* SB_Flesh;
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		USoundBase* SB_Metal;
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		USoundBase* SB_Wood;
	/********************* ANIMATIONS *********************/
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimationAsset* FireAnimation;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimationAsset* ReloadAnimation;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimationAsset* ReloadEmptyAnimation;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimationAsset* TPPReloadAnimation;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimationAsset* TPPReloadEmptyAnimation;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimMontage* FirstPersonMontage;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<FName> ADSFireNames;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<FName> HipFireNames;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		UAnimMontage* ThirdPersonMontage;

	void PlayFireAnimation(bool IsLocalPlayer);
	void PlayReloadAnimation(bool IsLocalPlayer);
	bool bWeaponActive;

	/********************* FIRE MODES *********************/
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<EFireMode> FireModes;

	int8 FireModesIndex;
	EFireMode FireMode;
	FTimerHandle TFullAutoHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		uint8 BurstFireAmount;
	uint8 BurstFireShot;

	/********************* AMMO *********************/
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		int32 MagazineCapacity;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		int32 TotalAmmoCapacity;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Weapon")
		int32 CurrentAmmoRemaining;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Weapon")
		int32 MagazineAmmo;

	/********************* FOV/ATTACHMENTS *********************/
	UPROPERTY(Replicated)
		ATDMAttachment_Optic* Optic;
	UPROPERTY(Replicated)
		ATDMAttachment* Muzzle;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float CameraFOV;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float CameraFOVSpeed;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TArray<TSubclassOf<UCameraShake>> FireCameraShakes;

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_AddAttachment(TSubclassOf<ATDMAttachment> AttachmentClass);
	bool Server_AddAttachment_Validate(TSubclassOf<ATDMAttachment> AttachmentClass);
	void Server_AddAttachment_Implementation(TSubclassOf<ATDMAttachment> AttachmentClass);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	void PerformEffects(FHitResult HitResult);

	bool PerformLineTrace(FVector SpawnLocation, FRotator SpawnRotation);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_Fire(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector);
	bool Server_Fire_Validate(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector);
	void Server_Fire_Implementation(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
		void Multi_Fire(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector);
	bool Multi_Fire_Validate(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector);
	void Multi_Fire_Implementation(FVector_NetQuantize10 SpawnLocation, FVector_NetQuantize10 MuzzleRotationVector);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_Reload();
	bool Server_Reload_Validate();
	void Server_Reload_Implementation();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
		void Multi_Reload();
	bool Multi_Reload_Validate();
	void Multi_Reload_Implementation();
public:
	void PerformHit(FHitResult HitResult);

	void FirearmInHand();
	void Reload();
	void Fire();
	void StopFire();
	void SwitchFireMode();


	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void ActivateWeapon();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void AddAttachment(TSubclassOf<ATDMAttachment> AttachmentClass);

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		FORCEINLINE	ATDMAttachment_Optic* GetOptic() const { return Optic; }

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		FORCEINLINE	ATDMAttachment* GetMuzzle() const { return Muzzle; }
	float GetCameraFOV();
	float GetCameraFOVSpeed();

	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() { return WeaponMesh; }
};
