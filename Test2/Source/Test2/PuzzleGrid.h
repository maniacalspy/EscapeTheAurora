// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EndLevelDoor.h"
#include "PuzzleBlock.h"
#include "EngineUtils.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleGrid.generated.h"

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

	class APuzzleBlock* _puzzleActor;
	class AEndLevelDoor* _doorActor;


};
