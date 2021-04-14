// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDMWeaponCustomise.generated.h"

class ATDMWeaponBase;
class AAttachmentCustomise_Optic;
class AAttachmentCustomise_Muzzle;

UCLASS()
class TDMDEATHMATCH_API ATDMWeaponCustomise : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATDMWeaponCustomise();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment")
		TSubclassOf<ATDMWeaponBase> WeaponClass;

	AAttachmentCustomise_Optic* Optic;
	AAttachmentCustomise_Muzzle* Muzzle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void AddAttachment(TSubclassOf<ATDMAttachmentCustomise> AttachmentClass);

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		FORCEINLINE	AAttachmentCustomise_Optic* GetOptic() const { return Optic; }

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		FORCEINLINE	AAttachmentCustomise_Muzzle* GetMuzzle() const { return Muzzle; }

};
