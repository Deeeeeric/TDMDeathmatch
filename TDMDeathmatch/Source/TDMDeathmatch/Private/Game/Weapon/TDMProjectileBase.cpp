// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/Weapon/TDMProjectileBase.h"
#include "Player/TDMCharacterBase.h"
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
	if (OtherActor == nullptr)
	{
		return;
	}
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics()) // Replicate on server
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		Destroy();
	}

	if (ATDMCharacterBase* ShotPlayer = Cast<ATDMCharacterBase>(OtherActor))
	{
		// Spawn effects
		if (GetWorld()->IsServer())
		{
			if (AActor* CurrentWeapon = GetOwner())
			{
				if (ATDMCharacterBase* Shooter = Cast<ATDMCharacterBase>(CurrentWeapon->GetOwner()))
				{//Make sure a player is valid before we call the function IsOnSameTeam
					if (Shooter->GetPlayerState<ATDMPlayerState>() && !Shooter->GetPlayerState<ATDMPlayerState>()->IsOnSameTeam(ShotPlayer))
					{//Player not on the same team will take damage
						ShotPlayer->TakeDamage(20.0f, FDamageEvent(), nullptr, Shooter);
					}
				}
			}
		}
	}

	Destroy(); //Destroy projectile on any blocking hit (no bounce-back)
}


