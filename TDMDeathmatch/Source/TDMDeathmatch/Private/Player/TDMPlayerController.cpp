// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TDMPlayerController.h"

void ATDMPlayerController::SetPawn(APawn* InPawn)
{
	if (!HasAuthority())
	{
		if (InPawn)
		{
			OnPossessionChange(EPossessed::Possessed);
		}
		else
		{
			if (APawn* PossessedPawn = GetPawn())
			{
				PossessedPawn->PrimaryActorTick.SetTickFunctionEnable(false);
			}
			OnPossessionChange(EPossessed::UnPossessed);
		}
	}

	Super::SetPawn(InPawn);
}
