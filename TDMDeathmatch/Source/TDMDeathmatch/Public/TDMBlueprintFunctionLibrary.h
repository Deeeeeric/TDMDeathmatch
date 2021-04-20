// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TDMBlueprintFunctionLibrary.generated.h"

class ATDMPlayerState;

UCLASS()
class TDMDEATHMATCH_API UTDMBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="TDMBlueprintFunctionLibrary")
	static TArray<ATDMPlayerState*> GetSortedPlayerStates(ACharacter* LocalPlayer);
};
