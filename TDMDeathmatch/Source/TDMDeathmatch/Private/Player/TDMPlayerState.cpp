// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TDMPlayerState.h"
#include "Game/GameMode/TDMGameStateBase.h"
#include "Player/TDMCharacterBase.h"
#include "Net/UnrealNetwork.h"

ATDMPlayerState::ATDMPlayerState()
{
	Team = ETeam::None;
	Kills = 0;
	Deaths = 0;
}

void ATDMPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{//On server

		uint8 AlphaTeamCount = 0;
		uint8 BravoTeamCount = 0;

		if (ATDMGameStateBase* GS = GetWorld()->GetGameState<ATDMGameStateBase>())
		{//Get the game state
			for (APlayerState* PS : GS->PlayerArray)
			{//For every player in the within the game state
				if (ATDMPlayerState* TDMPS = Cast<ATDMPlayerState>(PS))
				{//Our player
					if (TDMPS->GetTeam() == ETeam::Alpha)
					{//Get the team the player is on
						++AlphaTeamCount;
					}
					else if(TDMPS->GetTeam() == ETeam::Bravo)
					{
						++BravoTeamCount;
					}
				}
			}
		}
		if (AlphaTeamCount > BravoTeamCount)
		{//If Alpha team has more players than Bravo, Auto pick to Bravo
			Team = ETeam::Bravo;
			UE_LOG(LogTemp, Warning, TEXT("Setting Team to BRAVO"));
		}
		else
		{
			Team = ETeam::Alpha;
			UE_LOG(LogTemp, Warning, TEXT("Setting Team to ALPHA"));
		}
	}
}

void ATDMPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATDMPlayerState, Team); // replicate to any client connected to us
	DOREPLIFETIME(ATDMPlayerState, Kills);
	DOREPLIFETIME(ATDMPlayerState, Deaths);
}

bool ATDMPlayerState::SetTeam(ETeam JoinTeam)
{
	if (HasAuthority())
	{
		//Perform to see if joining team is full	
		Team = JoinTeam;
		return true;
	}
	return false;
}

bool ATDMPlayerState::IsOnSameTeam(class ATDMCharacterBase* Character)
{//Check if valid
	if (Character == nullptr)
	{
		return false;
	}
	if (ATDMPlayerState* PS = Character->GetPlayerState<ATDMPlayerState>())
	{
		if (PS->GetTeam() == Team)
		{
			return true;
		}
	}
	return false;
}
