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
class ESCAPETHEAURORA_API APuzzleGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnBlockDoneTipping();

private:

	bool puzzleIsSolved;
	FQuat LastValidRotation;
	FVector LastValidLocation; 

	void FindValidTipDirections();
	TArray<_tileDirections> ValidDirections;

	FVector ConvertDirectionToVector(_tileDirections Direction);

	bool IsInvalidTip;

	UPROPERTY(EditAnywhere, Category = "Puzzle Block")
		class APuzzleBlock* _pPuzzleActor;

	UPROPERTY(EditAnywhere, Category = "PuzzleGrid")
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

	TArray<GridTile*> BaseStartPoints;

	TArray<GridTile*> MyGoalPoints;

	TArray<GridTile*> TilesBlockIsOn;

	FVector FindRotateAxis(FVector impactNormal);

	void MoveBlock(FVector impactNormal);

	void SetDestinationViaTiles(TArray<GridTile*> DestTiles, FVector Axis);

	void CheckPuzzleSolved();

	void OnPuzzleSolved();

	void UpdateLastCoordinates();

	UFUNCTION()
		void ResetPuzzle();

	float _tileWidth, _tileHeight;

	TArray<GridTile*> _puzzleGrid;

};
