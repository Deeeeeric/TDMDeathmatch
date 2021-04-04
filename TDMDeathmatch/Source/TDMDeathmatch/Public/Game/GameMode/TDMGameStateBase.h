// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Player/TDMPlayerState.h"
#include "TDMGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class TDMDEATHMATCH_API ATDMGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ATDMGameStateBase();

protected:
	UPROPERTY(EditDefaultsOnly)
		int ScoreToWin;

	UPROPERTY(EditDefaultsOnly)
		int IncrementScoreValue;

	UPROPERTY(Replicated, BlueprintReadOnly)
		int AlphaTeamScore;

	UPROPERTY(Replicated, BlueprintReadOnly)
		int BravoTeamScore;

public:
	// Returns None if neither team has >= ScoreTowin
	ETeam AddScoreToTeam(ETeam Team);
	ETeam GetWinningTeam();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetAlphaTeamScore() const {return AlphaTeamScore;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetBravoTeamScore() const {return BravoTeamScore;}
};
