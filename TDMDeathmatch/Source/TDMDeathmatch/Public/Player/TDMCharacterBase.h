// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
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


protected:
	virtual void BeginPlay();

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:
	UPROPERTY(EditAnywhere, Category = "Weapon")
		TSubclassOf<ATDMWeaponBase> WeaponToSpawn;

	UPROPERTY(ReplicatedUsing = OnRep_WeaponInHand, BlueprintReadOnly)
		ATDMWeaponBase* WeaponInHand;

	UFUNCTION()
		void OnRep_WeaponInHand();

	/** Fires a projectile. */
	void OnFire();
	void StopFire();

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Weapon")
		bool bIsAiming;
	void StartAiming();
	void StopAiming();
	void SwitchFireMode();
	bool bFOVFinished;

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_Aim(bool Aiming);
	bool Server_Aim_Validate(bool Aiming);
	void Server_Aim_Implementation(bool Aiming);

	void HandleAimFOV(float DeltaSeconds);

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
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
