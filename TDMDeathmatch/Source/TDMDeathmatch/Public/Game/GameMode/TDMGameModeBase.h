// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TDMGameModeBase.generated.h"

class ATDMCharacterBase;

UCLASS()
class TDMDEATHMATCH_API ATDMGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	ATDMGameModeBase();

protected:
	bool bGameInProgress;

protected:
	// Returns true if a team has won
	bool CheckIfTeamScoreWins();

public:
	void PlayerKilled(ATDMCharacterBase* Killer, ATDMCharacterBase* Killed);
};
