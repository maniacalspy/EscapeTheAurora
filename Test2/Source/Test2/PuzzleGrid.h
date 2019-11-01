// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EndLevelDoor.h"
#include "GridTile.h"
#include "PuzzleBlock.h"
#include "EngineUtils.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelGridStruct.h"
#include "PuzzleGrid.generated.h"

class PuzzleBlock;
class GridTile;

UCLASS()
class TEST2_API APuzzleGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnBlockDoneTipping();

	void createGrid(TArray<bool> puzzleGridMap);

private:

	class APuzzleBlock* _pPuzzleActor;
	class AEndLevelDoor* _pDoorActor;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* pTileGridMesh;


	///Get a given neighbor for a tile, 1 is north, 2 is east, 3 is south, 4 is west 
	GridTile* GetTileNeighbor(GridTile& tile, int direction);

	const float _gridColumnCount = 1, _gridRowCount = 1, _tileWidth = 1, _tileHeight = 1;

	TArray<GridTile*> _puzzleGrid;

};
