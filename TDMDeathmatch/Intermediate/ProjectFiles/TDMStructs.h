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
	UPROPERTY(EditAnywhere, Category="Firearm")
	TSubclassOf<ATDMWeaponBase> FirearmClass;

	UPROPERTY(EditAnywhere, Category = "Firearm")
		TSubclassOf<ATDMAttachment> OpticClass;

	UPROPERTY(EditAnywhere, Category = "Firearm")
		TSubclassOf<ATDMAttachment_Optic> MuzzleClass;

};