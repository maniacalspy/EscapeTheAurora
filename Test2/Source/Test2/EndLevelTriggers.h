// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EndLevelDoor.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "KeyCardSpawner.h"
#include "Components/LightComponent.h"
#include "Components/AudioComponent.h"
#include "EndLevelTriggers.generated.h"

UCLASS()
class TEST2_API AEndLevelTriggers : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEndLevelTriggers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	TArray<ADoorBase*> DoorsToTrigger;

	TArray<ULightComponent*> LightsToTrigger;

	TArray<UAudioComponent*> SoundsToTrigger;

	TArray<AKeyCardSpawner*> KeySpawners;

	UFUNCTION()
		void DebugPing();

	UFUNCTION()
		void PlayNextSound();

	void PowerOnDoors();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TriggerAll();
	
};
