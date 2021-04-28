// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/GameMode/TDMGameModeBase.h"
#include "Game/GameMode/TDMGameStateBase.h"
#include "Game/GameMode/TDMSpawnPoint.h"
#include "Player/TDMPlayerState.h"
#include "Player/TDMCharacterBase.h"

#include "Kismet/GameplayStatics.h"

ATDMGameModeBase::ATDMGameModeBase()
{
	bGameInProgress = true;
}

void ATDMGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDMSpawnPoint::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (ATDMSpawnPoint* SpawnPoint = Cast<ATDMSpawnPoint>(Actor))
		{
			if (SpawnPoint->IsGameSpawnPoint())
			{
				SpawnPoints.Add(SpawnPoint);
			}
			else
			{
				SetupSpawnPoints.Add(SpawnPoint);
			}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("BEGIN PLAY"));

	PostLogin(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

void ATDMGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	UE_LOG(LogTemp, Warning, TEXT("POST LOGIN"));

	SpawnAtPoint(NewPlayer);
}

ATDMSpawnPoint* ATDMGameModeBase::FindSpawnPoint(ETeam CurrentTeam)
{
	if (SpawnPoints.Num() <= 0) { return nullptr; }
	if (CurrentTeam == ETeam::None && SetupSpawnPoints.Num() > 0)
	{
		int RandInt = FMath::RandRange(0, SetupSpawnPoints.Num() - 1);
		return SetupSpawnPoints[RandInt];
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDMCharacterBase::StaticClass(), FoundActors);

	TArray<ATDMCharacterBase*> Enemies;
	for (AActor* Actor : FoundActors)
	{
		if (ATDMCharacterBase* Character = Cast<ATDMCharacterBase>(Actor))
		{
			if (ATDMPlayerState* PS = Character->GetPlayerState<ATDMPlayerState>())
			{
				if (PS->GetTeam() != CurrentTeam)
				{
					Enemies.Add(Character);
				}
			}
		}
	}

	float FurthestDistance = 0.0f;
	ATDMSpawnPoint* FurthestSpawnPoint = SpawnPoints[0];

	for (ATDMSpawnPoint* SpawnPoint : SpawnPoints)
	{//For every spawn point
		for (ATDMCharacterBase* Character : Enemies)
		{//Where an enemy has spawned
			float CurrentDistance = Character->GetDistanceTo(SpawnPoint);
			if (CurrentDistance > FurthestDistance)
			{//If the current distance on player is > the furthest distance
				FurthestDistance = CurrentDistance;
				FurthestSpawnPoint = SpawnPoint;
			}
		}
	}

	return FurthestSpawnPoint;
}

void ATDMGameModeBase::SpawnAtPoint(APlayerController* NewPlayer)
{
	if (CharacterClass == nullptr) { return; }
	if (ATDMCharacterBase* Character = NewPlayer->GetPawn<ATDMCharacterBase>())
	{
		if (ATDMPlayerState* PS = Character->GetPlayerState<ATDMPlayerState>())
		{
			if (ATDMSpawnPoint* SpawnPoint = FindSpawnPoint(PS->GetTeam()))
			{
				NewPlayer->UnPossess();

				FVector Location = SpawnPoint->GetActorLocation();
				FRotator Rotation = SpawnPoint->GetActorRotation();
				FActorSpawnParameters SpawnParams;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				if (ATDMCharacterBase* NewCharacter = GetWorld()->SpawnActor<ATDMCharacterBase>(CharacterClass, Location, Rotation, SpawnParams))
				{
					NewPlayer->Possess(NewCharacter);
				}
			}
		}
	}
	else
	{//Initial Spawn
		if (ATDMSpawnPoint* SpawnPoint = FindSpawnPoint(ETeam::None))
		{
			NewPlayer->UnPossess();

			FVector Location = SpawnPoint->GetActorLocation();
			FRotator Rotation = SpawnPoint->GetActorRotation();
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			if (ATDMCharacterBase* NewCharacter = GetWorld()->SpawnActor<ATDMCharacterBase>(CharacterClass, Location, Rotation, SpawnParams))
			{
				NewPlayer->Possess(NewCharacter);
			}
		}
	}
}

bool ATDMGameModeBase::CheckIfTeamScoreWins()
{
	return false;
}

void ATDMGameModeBase::PlayerKilled(ATDMCharacterBase* Killer, ATDMCharacterBase* Killed)
{
	//if (!bGameInProgress) { return; }
	//Unpossess current pawn
	if (Killed == nullptr || Killer == nullptr) return;

	if (Killer == Killed)
	{//If self kill, add to death, not score
		if (ATDMPlayerState* PS = Killer->GetPlayerState<ATDMPlayerState>())
		{
			PS->AddDeath();
		}
		return;
	}

	if (ATDMGameStateBase* GS = GetGameState<ATDMGameStateBase>())
	{
		if (ATDMPlayerState* PS = Killer->GetPlayerState<ATDMPlayerState>())
		{
			PS->AddKill();
			ETeam WinningTeam = GS->AddScoreToTeam(PS->GetTeam());
			if (WinningTeam != ETeam::None)
			{// A team has won
				bGameInProgress = false;
				if (WinningTeam == ETeam::Alpha)
				{
					UE_LOG(LogTemp, Warning, TEXT("ALPHA Team WON"));
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("BRAVO Team WON"));
				}
			}
		}

		if (ATDMPlayerState* PS = Killed->GetPlayerState<ATDMPlayerState>())
		{
			PS->AddDeath();
		}
	}
	if (APlayerController* PC = Killed->GetController<APlayerController>())
	{
		SpawnAtPoint(PC);
	}
}

void ATDMGameModeBase::SpawnAtPoint(ATDMCharacterBase* PlayerCharacter)
{
	if (PlayerCharacter)
	{
		if (ATDMPlayerState* PS = PlayerCharacter->GetPlayerState<ATDMPlayerState>())
		{
			if (ATDMSpawnPoint* SpawnPoint = FindSpawnPoint(PS->GetTeam()))
			{
				PlayerCharacter->SetActorLocation(SpawnPoint->GetActorLocation());
			}
		}
	}
}
