// Fill out your copyright notice in the Description page of Project Settings.


#include "TDMBlueprintFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/GameStateBase.h"
#include "Player/TDMPlayerState.h"
#include "Engine/World.h"

TArray<ATDMPlayerState*> UTDMBlueprintFunctionLibrary::GetSortedPlayerStates(ACharacter* LocalPlayer)
{
	TArray<ATDMPlayerState*> SortedPlayerState;

	if (LocalPlayer == nullptr)
	{
		return SortedPlayerState;
	}

	if (UWorld* World = LocalPlayer->GetWorld())
	{
		ETeam LocalTeam = LocalPlayer->GetPlayerState<ATDMPlayerState>()->GetTeam();

		for (APlayerState* PS : World->GetGameState()->PlayerArray)
		{
			if (ATDMPlayerState* PState = Cast<ATDMPlayerState>(PS))
			{
				if (PState->GetTeam() == LocalTeam)
				{
					SortedPlayerState.Add(PState);
				}
			}
		}

		for (APlayerState* PS : World->GetGameState()->PlayerArray)
		{
			if (ATDMPlayerState* PState = Cast<ATDMPlayerState>(PS))
			{
				if (PState->GetTeam() != LocalTeam)
				{
					SortedPlayerState.Add(PState);
				}
			}
		}
	}
	return SortedPlayerState;
}
