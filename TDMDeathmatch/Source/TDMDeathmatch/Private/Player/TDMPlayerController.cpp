// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TDMPlayerController.h"

void ATDMPlayerController::SetPawn(APawn* InPawn)
{
	if (InPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("InPawn Valid"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("InPawn INValid"));
	}
	if (!HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Running On Client"));
	}
	Super::SetPawn(InPawn);
}
