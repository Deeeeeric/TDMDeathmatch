// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDMDeathmatchGameMode.h"
#include "TDMDeathmatchHUD.h"
#include "TDMDeathmatchCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATDMDeathmatchGameMode::ATDMDeathmatchGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATDMDeathmatchHUD::StaticClass();
}
