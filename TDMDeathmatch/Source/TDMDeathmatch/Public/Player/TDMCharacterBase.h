// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TDMDeathmatch/TDMStructs.h"
#include "TDMCharacterBase.generated.h"

class ATDMWeaponBase;
class UCameraShake;

UCLASS()
class TDMDEATHMATCH_API ATDMCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATDMCharacterBase();

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(BlueprintReadWrite, Category = Mesh)
		class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FirstPersonCameraComponent;

	float Health;

	UPROPERTY(ReplicatedUsing = OnRep_IsDead)
		bool bIsDead;
	UFUNCTION()
		void OnRep_IsDead();

	void DestroyCharacter();

	UFUNCTION(BlueprintImplementableEvent, Category = "Weapon | HUD")
		void WeaponAmmoChanged(ATDMWeaponBase* Weapon);


protected:
	virtual void BeginPlay();
	virtual void Destroyed() override;

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:
	UPROPERTY(EditAnywhere, Category = "Weapon")
		TSubclassOf<ATDMWeaponBase> WeaponToSpawn;

	UPROPERTY(ReplicatedUsing = OnRep_WeaponInHand, BlueprintReadOnly)
		ATDMWeaponBase* WeaponInHand;

	UFUNCTION()
		void OnRep_WeaponInHand();

	UFUNCTION(BlueprintCallable)
		void SpawnWeapon(FFirearmToSpawn FirearmToSpawn);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_SpawnFirearm(FFirearmToSpawn FirearmToSpawn);
	bool Server_SpawnFirearm_Validate(FFirearmToSpawn FirearmToSpawn);
	void Server_SpawnFirearm_Implementation(FFirearmToSpawn FirearmToSpawn);

	/** Fires a projectile. */
	void OnFire();
	void StopFire();

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Weapon")
	bool bIsAiming;
	void StartAiming();
	void StopAiming();
	bool bFOVFinished;

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_Aim(bool Aiming);
	bool Server_Aim_Validate(bool Aiming);
	void Server_Aim_Implementation(bool Aiming);

	void SwitchFireMode();
	void Reload();

	void HandleAimFOV(float DeltaSeconds);

	void MoveForward(float Val);

	void MoveRight(float Val);

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:
	virtual void Tick(float DeltaSeconds) override;

	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	FORCEINLINE bool GetIsAiming() { return bIsAiming; }

	void PlayCameraShake(TSubclassOf<UCameraShake> CameraShake);
};
