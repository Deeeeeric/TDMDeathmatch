// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDMDeathmatchGameMode.h"
#include "TDMDeathmatchHUD.h"
#include "Player/TDMCharacterBase.h"
#include "UObject/ConstructorHelpers.h"

ATDMDeathmatchGameMode::ATDMDeathmatchGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/BlueprintClasses/Player/BP_TDMCharacterBase"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATDMDeathmatchHUD::StaticClass();
}
