// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleGrid.h"
#include "Engine/Engine.h"

// Sets default values
APuzzleGrid::APuzzleGrid() : _gridColumnCount(1.f), _gridRowCount(1.f), _tileWidth(1.f), _tileHeight(1.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	

}

// Called when the game starts or when spawned
void APuzzleGrid::BeginPlay()
{
	Super::BeginPlay();

	//POSSIBLE TODO: CREATE A STARTPUZZLE FUNCTION THAT TAKES A BLOCK'S STARTING COORDINATE IN THE GRID AND SPAWN IT THERE

	//TODO: MAKE THIS ACTOR SPAWN A PUZZLE BLOCK RATHER THAN PUTTING ONE IN THE SCENE AND TRYING TO FIND IT
	for (TActorIterator<APuzzleBlock> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
		_puzzleActor = *ActorIterator;
	}

	//TODO: MAKE THIS ACTOR SPAWN A DOOR ACTOR RATHER THAN FINDING ONE IN WORLD, THAT WAY WE DON'T HAVE TO CLARIFY WHICH DOOR WE WANT TO USE IF THERE IS AN ENTRANCE/EXIT DOOR
	for (TActorIterator<AEndLevelDoor> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator) {
		_doorActor = *ActorIterator;
	}

	if (_puzzleActor != nullptr) _puzzleActor->SetOwnerGrid(*this);
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

GridTile* APuzzleGrid::GetTileNeighbor(GridTile& tile, int direction) {
	return &tile;
}

void APuzzleGrid::createGrid(TArray<bool> puzzleMapGrid) {

}