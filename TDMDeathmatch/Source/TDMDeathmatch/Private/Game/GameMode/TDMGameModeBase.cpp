// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/GameMode/TDMGameModeBase.h"
#include "Game/GameMode/TDMGameStateBase.h"
#include "Player/TDMPlayerState.h"
#include "Player/TDMCharacterBase.h"

ATDMGameModeBase::ATDMGameModeBase()
{
	bGameInProgress = true;
}

bool ATDMGameModeBase::CheckIfTeamScoreWins()
{
	return false;
}

void ATDMGameModeBase::PlayerKilled(ATDMCharacterBase* Killer, ATDMCharacterBase* Killed)
{
	if (!bGameInProgress)
	{
		return;
	}
	// Go to Team State and add point for team killer
	// add point to killer player state
	// add death to killed player state

	if (ATDMGameStateBase* GS = GetGameState<ATDMGameStateBase>())
	{
		if (Killer)
		{
			if (ATDMPlayerState* PS = Killer->GetPlayerState<ATDMPlayerState>())
			{
				PS->AddKill();
				ETeam WinningTeam = GS->AddScoreToTeam(PS->GetTeam());
				if (WinningTeam != ETeam::None)
				{
					// A team has won
					bGameInProgress = false;
				}
			}
		}
		if (Killed)
		{
			if (ATDMPlayerState* PS = Killed->GetPlayerState<ATDMPlayerState>())
			{
				PS->AddDeath();
			}
		}
	}
}