// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "TDMSpawnPoint.generated.h"

/**
 * 
 */
UCLASS()
class TDMDEATHMATCH_API ATDMSpawnPoint : public ATargetPoint
{
	GENERATED_BODY()
	
public:
	ATDMSpawnPoint();

protected:
	UPROPERTY(EditAnywhere, Category="SpawnPoint")
	bool bIsGameSpawnPoint;

public:
FORCEINLINE bool IsGameSpawnPoint() {return bIsGameSpawnPoint;}
};
