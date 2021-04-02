// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/GameMode/TDMGameStateBase.h"
#include "Net/UnrealNetwork.h"

ATDMGameStateBase::ATDMGameStateBase()
{
	ScoreToWin = 10;
	IncrementScoreValue = 1;
	AlphaTeamScore = 0;
	BravoTeamScore = 0;
}

ETeam ATDMGameStateBase::AddScoreToTeam(ETeam Team)
{
	if (Team == ETeam::Alpha)
	{
		AlphaTeamScore += IncrementScoreValue;
	}
	else if (Team == ETeam::Bravo)
	{
		BravoTeamScore += IncrementScoreValue;
	}
	UE_LOG(LogTemp, Warning, TEXT("TESTING TO ADD SCORE"));

	return GetWinningTeam();
}

ETeam ATDMGameStateBase::GetWinningTeam()
{
	if (AlphaTeamScore >= ScoreToWin)
	{
		return ETeam::Alpha;
	}
	else if (BravoTeamScore >= ScoreToWin)
	{
		return ETeam::Bravo;
	}
	else
	{
		return ETeam::None;
	}
}
