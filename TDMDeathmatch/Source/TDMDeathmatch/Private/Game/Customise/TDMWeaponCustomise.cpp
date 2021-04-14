// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Customise/TDMWeaponCustomise.h"
#include "Game/Customise/AttachmentCustomise_Optic.h"
#include "Game/Customise/AttachmentCustomise_Muzzle.h"

#include "Components/SkeletalMeshComponent.h"

// Sets default values
ATDMWeaponCustomise::ATDMWeaponCustomise()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetReplicates(false);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComponent"));
	RootComponent = WeaponMesh;

}

// Called when the game starts or when spawned
void ATDMWeaponCustomise::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATDMWeaponCustomise::AddAttachment(TSubclassOf<ATDMAttachmentCustomise> AttachmentClass)
{
	if (AttachmentClass)
	{
		if (ATDMAttachmentCustomise* Attachment = GetWorld()->SpawnActor<ATDMAttachmentCustomise>(AttachmentClass))
		{
			if (Attachment->GetAttachmentType() == EAttachmentType::Optic)
			{
				if (Optic)
				{
					Optic->Destroy();
				}
				Optic = Cast<AAttachmentCustomise_Optic>(Attachment);
			}
			else if (Attachment->GetAttachmentType() == EAttachmentType::Muzzle)
			{
				if (Muzzle)
				{
					Muzzle->Destroy();
				}
				Muzzle = Cast<AAttachmentCustomise_Muzzle>(Attachment);
			}
			Attachment->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, Attachment->GetAttachmentSocket());
		}
	}
}

