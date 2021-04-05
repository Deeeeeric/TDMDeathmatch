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
			SpawnPoints.Add(SpawnPoint);
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

ATDMSpawnPoint* ATDMGameModeBase::FindSpawnPoint()
{
	if (SpawnPoints.Num() <= 0) { return nullptr; }

	int RandVal = FMath::RandRange(0, SpawnPoints.Num() - 1);

	return SpawnPoints[RandVal];
}

void ATDMGameModeBase::SpawnAtPoint(APlayerController* NewPlayer)
{
	if (CharacterClass == nullptr) { return; }
	if (ATDMSpawnPoint* SpawnPoint = FindSpawnPoint())
	{
		FVector Location = SpawnPoint->GetActorLocation();
		FRotator Rotation = SpawnPoint->GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		if (ATDMCharacterBase* Character = GetWorld()->SpawnActor<ATDMCharacterBase>(CharacterClass, Location, Rotation, SpawnParams))
		{
			NewPlayer->Possess(Character);
		}
	}
}

bool ATDMGameModeBase::CheckIfTeamScoreWins()
{
	return false;
}

void ATDMGameModeBase::PlayerKilled(ATDMCharacterBase* Killer, ATDMCharacterBase* Killed)
{
	if (!bGameInProgress) { return; }
	//Unpossess current pawn
	if (Killer == nullptr || Killed == nullptr) { return; }

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
}