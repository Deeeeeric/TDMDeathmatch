// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TDMPlayerState.h"
#include "Net/UnrealNetwork.h"

ATDMPlayerState::ATDMPlayerState()
{
	Team = ETeam::None;
	Kills = 0;
	Deaths = 0;
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