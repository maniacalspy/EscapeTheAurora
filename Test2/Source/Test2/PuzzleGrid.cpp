// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleGrid.h"
#include "Engine/Engine.h"

// Sets default values
APuzzleGrid::APuzzleGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	

}

// Called when the game starts or when spawned
void APuzzleGrid::BeginPlay()
{
	Super::BeginPlay();
	for (TActorIterator<APuzzleBlock> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
		_puzzleActor = *ActorIterator;
	}

	for (TActorIterator<AEndLevelDoor> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
		_doorActor = *ActorIterator;
	}

	if (_puzzleActor != nullptr) _puzzleActor->pOwnerGrid = this;
}

// Called every frame
void APuzzleGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APuzzleGrid::OnBlockDoneTipping() 
{
	if (_doorActor != nullptr) _doorActor->OpenDoor();
}

