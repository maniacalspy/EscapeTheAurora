// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EndLevelTriggers.h"
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

private:

	bool puzzleIsSolved;
	FQuat LastValidRotation;
	FVector LastValidLocation; 

	bool IsInvalidTip;

	class APuzzleBlock* _pPuzzleActor;
	class AEndLevelTriggers* _pTriggerActor;

	void createGrid();
	void SetBlockStartPosition();

	float _XScale;
	float _YScale;

	virtual void PostInitializeComponents() override;

	UPROPERTY(EditAnywhere, Category = Mesh)
	class UStaticMeshComponent* pTileGridMesh;

	UPROPERTY(EditAnywhere)
		int8 LevelGridNumber;

	struct LevelGrid* MyLevelGrid;
	
	TArray<GridTile*> MyStartPoints;

	TArray<GridTile*> MyGoalPoints;

	TArray<GridTile*> TilesBlockIsOn;

	void MoveBlock(FVector impactNormal);

	void CheckPuzzleSolved();

	void OnPuzzleSolved();

	float _tileWidth, _tileHeight;

	TArray<GridTile*> _puzzleGrid;

};
