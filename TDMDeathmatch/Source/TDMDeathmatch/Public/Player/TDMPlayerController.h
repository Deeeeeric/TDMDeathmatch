// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TDMDeathmatch/TDMStructs.h"
#include "TDMPlayerController.generated.h"

UENUM(BlueprintType)
enum class EPossessed : uint8
{
	Possessed	UMETA(DisplayName, "Possessed"),
	UnPossessed	UMETA(DisplayName, "UnPossessed")
};

UCLASS()
class TDMDEATHMATCH_API ATDMPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void SetPawn(APawn* InPawn) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnPossessionChange(EPossessed Possessed);

	UFUNCTION(BlueprintImplementableEvent)
	void OnGameOver(ETeam WinningTeam);

	UFUNCTION(Client, Reliable)
	void GameOver(ETeam WinningTeam);
	void GameOver_Implementation(ETeam WinningTeam);
};
