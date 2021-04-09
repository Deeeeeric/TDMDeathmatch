// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMAttachment.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
ATDMAttachment::ATDMAttachment()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SetReplicates(true);

	AttachmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AttachmentStaticMesh"));
	RootComponent = AttachmentMesh;
}

// Called when the game starts or when spawned
void ATDMAttachment::BeginPlay()
{
	Super::BeginPlay();

	switch (AttachmentType)
	{
	case EAttachmentType::Optic:
		AttachmentSocket = FName("B_Optic");
		break;
	case EAttachmentType::Muzzle:
		AttachmentSocket = FName("B_Muzzle");
		break;
	}
}

