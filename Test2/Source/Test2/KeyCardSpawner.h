// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Triggerable.h"
#include "KeyCardSpawner.generated.h"

UCLASS()
class TEST2_API AKeyCardSpawner : public AActor, public ITriggerable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyCardSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnKey();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = SpawnInfo)
		TSubclassOf<AActor> KeyCardClass;

	virtual void OnTriggered_Implementation() override;
};
