// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TDMPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TDMDEATHMATCH_API ATDMPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	public:
	virtual void SetPawn(APawn* InPawn) override;
};
