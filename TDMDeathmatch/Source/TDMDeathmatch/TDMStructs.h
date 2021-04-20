#pragma once

#include "Engine/DataTable.h"
#include "TDMStructs.generated.h"

class ATDMWeaponBase;
class ATDMAttachment;
class ATDMAttachment_Optic;

UENUM(BlueprintType)
enum class EAttachmentType : uint8
{
	Optic	UMETA(DisplayName, "Optic"),
	Muzzle	UMETA(DisplayName, "Muzzle")
};

UENUM(BlueprintType)
enum class ETeam : uint8
{
	None	UMETA(DisplayName, "None"), // Default
	Alpha	UMETA(DisplayName, "Alpha"),
	Bravo	UMETA(DisplayName, "Bravo")
};

USTRUCT(BlueprintType)
struct FFirearmToSpawn : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "Firearm")
		TSubclassOf<ATDMWeaponBase> FirearmClass;

	UPROPERTY(BlueprintReadWrite, Category = "Firearm")
		TSubclassOf<ATDMAttachment_Optic> OpticClass;

	UPROPERTY(BlueprintReadWrite, Category = "Firearm")
		TSubclassOf<ATDMAttachment> MuzzleClass;
};

USTRUCT(BlueprintType)
struct FScoreboardData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "Scoreboard")
		ETeam Team;

	UPROPERTY(BlueprintReadWrite, Category = "Scoreboard")
		int32 Kills;

	UPROPERTY(BlueprintReadWrite, Category = "Scoreboard")
		int32 Deaths;
};