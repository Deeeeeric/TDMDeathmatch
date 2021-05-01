// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TDMDeathmatch/TDMStructs.h"
#include "TDMGameModeBase.generated.h"

enum class ETeam : unsigned char;
class ATDMCharacterBase;
class ATDMSpawnPoint;

UCLASS()
class TDMDEATHMATCH_API ATDMGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	ATDMGameModeBase();

protected:
	bool bGameInProgress;

	UPROPERTY(EditDefaultsOnly, Category="TDM")
	TSubclassOf<ATDMCharacterBase> CharacterClass;

	//Dedicated TArray of spawn points
	TArray<ATDMSpawnPoint*> SpawnPoints;
	TArray<ATDMSpawnPoint*> SetupSpawnPoints;


protected:
	virtual void BeginPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

	ATDMSpawnPoint* FindSpawnPoint(ETeam CurrentTeam);
	void SpawnAtPoint(APlayerController* NewPlayer);
	
	// Returns true if a team has won
	bool CheckIfTeamScoreWins();

	void OnGameOver(ETeam WinningTeam);

public:
	void PlayerKilled(ATDMCharacterBase* Killer, ATDMCharacterBase* Killed);
	void SpawnAtPoint(ATDMCharacterBase* PlayerCharacter);
};
