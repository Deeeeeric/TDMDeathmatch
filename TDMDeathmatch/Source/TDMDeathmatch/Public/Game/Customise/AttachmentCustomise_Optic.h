// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/Customise/TDMAttachmentCustomise.h"
#include "AttachmentCustomise_Optic.generated.h"

class ATDMAttachment_Optic;

UCLASS()
class TDMDEATHMATCH_API AAttachmentCustomise_Optic : public ATDMAttachmentCustomise
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attachment")
		TSubclassOf<ATDMAttachment_Optic> OpticClass;
};
