// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMProjectileBase.h"
#include "Player/TDMCharacterBase.h"
#include "Game/Weapon/TDMWeaponBase.h"
#include "Game/GameMode/TDMGameModeBase.h"
#include "Player/TDMPlayerState.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

ATDMProjectileBase::ATDMProjectileBase()
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &ATDMProjectileBase::OnHit);		// set up a notification for when this component hits something blocking
	CollisionComp->bReturnMaterialOnMove = true; //allow to give us the physics material that it gathers

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	RootComponent = CollisionComp;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
	ProjectileMesh->SetupAttachment(CollisionComp);

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void ATDMProjectileBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor == nullptr) { return; }

	if (ATDMWeaponBase* Weapon = Cast<ATDMWeaponBase>(GetOwner()))
	{
		Weapon->PerformHit(Hit);
	}

	Destroy(); //Destroy projectile on any blocking hit (no bounce-back)
}


