// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDMAttachment.generated.h"

class UStaticMeshComponent;

UENUM(BlueprintType)
enum class EAttachmentType : uint8
{
	Optic	UMETA(DisplayName, "Optic"),
	Muzzle	UMETA(DisplayName, "Muzzle")
};

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
		TEnumAsByte<EAttachmentType> AttachmentType;

	FName AttachmentSocket;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	FORCEINLINE FName GetAttachmentSocket() const { return AttachmentSocket; }
};
