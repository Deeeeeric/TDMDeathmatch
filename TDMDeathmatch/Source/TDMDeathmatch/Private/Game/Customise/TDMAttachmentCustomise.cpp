// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Customise/TDMAttachmentCustomise.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATDMAttachmentCustomise::ATDMAttachmentCustomise()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetReplicates(false);
	AttachmentMesh = CreateDefaultSubobject<UStaticMeshComponent>("AttachmentMeshComponent");
	RootComponent = AttachmentMesh;

}

// Called when the game starts or when spawned
void ATDMAttachmentCustomise::BeginPlay()
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
