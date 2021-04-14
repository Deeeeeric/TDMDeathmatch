// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/Customise/TDMAttachmentCustomise.h"
#include "AttachmentCustomise_Muzzle.generated.h"

class ATDMAttachment;

UCLASS()
class TDMDEATHMATCH_API AAttachmentCustomise_Muzzle : public ATDMAttachmentCustomise
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment")
		TSubclassOf<ATDMAttachment> MuzzleClass;
};
