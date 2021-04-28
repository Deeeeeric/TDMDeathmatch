// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TDMDeathmatch/TDMStructs.h"
#include "TDMPlayerState.generated.h"

/* Set up teams*/

UCLASS()
class TDMDEATHMATCH_API ATDMPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ATDMPlayerState();

protected:
	UPROPERTY(Replicated)
		ETeam Team;

	UPROPERTY(Replicated)
		int32 Kills;

	UPROPERTY(Replicated)
		int32 Deaths;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
		FORCEINLINE ETeam GetTeam() const { return Team; }
	UFUNCTION(BlueprintCallable)
		FORCEINLINE int32 GetKills() const { return Kills; }
	UFUNCTION(BlueprintCallable)
		FORCEINLINE int32 GetDeaths() const { return Deaths; }

	// Returns true if join was successful
	UFUNCTION(BlueprintCallable)
		bool SetTeam(ETeam JoinTeam);

	void AddKill() { ++Kills; }
	void AddDeath()
	{
		UE_LOG(LogTemp, Warning, TEXT("ADDING A DEATH"));
		++Deaths;
	}

	bool IsOnSameTeam(class ATDMCharacterBase* Character);
};
