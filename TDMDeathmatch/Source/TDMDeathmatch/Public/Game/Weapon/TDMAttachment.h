// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDMDeathmatch/TDMStructs.h"
#include "TDMAttachment.generated.h"

class UStaticMeshComponent;

UCLASS()
class TDMDEATHMATCH_API ATDMAttachment : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATDMAttachment();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Attachment")
		UStaticMeshComponent* AttachmentMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Attachment")
		EAttachmentType AttachmentType;

	FName AttachmentSocket;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	FORCEINLINE FName GetAttachmentSocket() const { return AttachmentSocket; }
	FORCEINLINE EAttachmentType GetAttachmentType() const {return AttachmentType; }
};
