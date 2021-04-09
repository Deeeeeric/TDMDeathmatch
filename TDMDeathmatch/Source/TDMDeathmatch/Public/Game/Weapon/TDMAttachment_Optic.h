// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/Weapon/TDMAttachment.h"
#include "TDMAttachment_Optic.generated.h"

/**
 *
 */
UCLASS()
class TDMDEATHMATCH_API ATDMAttachment_Optic : public ATDMAttachment
{
	GENERATED_BODY()

public:
	ATDMAttachment_Optic();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Optic")
		float CameraFOV;
	UPROPERTY(EditDefaultsOnly, Category = "Optic")
		float CameraFOVSpeed;

public:
	FORCEINLINE float GetCameraFOV() const { return CameraFOV; }
	FORCEINLINE float GetCameraFOVSpeed() const { return CameraFOVSpeed; }
};
