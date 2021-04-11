#pragma once

#include "Engine/DataTable.h"
#include "TDMStructs.generated.h"

class ATDMWeaponBase;
class ATDMAttachment;
class ATDMAttachment_Optic;

USTRUCT(BlueprintType)
struct FFirearmToSpawn : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="Firearm")
	TSubclassOf<ATDMWeaponBase> FirearmClass;

	UPROPERTY(BlueprintReadWrite, Category = "Firearm")
		TSubclassOf<ATDMAttachment_Optic> OpticClass;

	UPROPERTY(BlueprintReadWrite, Category = "Firearm")
		TSubclassOf<ATDMAttachment> MuzzleClass;

};