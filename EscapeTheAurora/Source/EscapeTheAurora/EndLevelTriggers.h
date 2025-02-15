// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineUtils.h"
#include "DoorBase.h"
#include "Triggerable.h"
#include "GameFramework/Actor.h"
#include "KeyCardSpawner.h"
#include "Components/LightComponent.h"
#include "Components/AudioComponent.h"
#include "EndLevelTriggers.generated.h"

UCLASS()
class ESCAPETHEAURORA_API AEndLevelTriggers : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEndLevelTriggers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	TArray<ULightComponent*> LightsToTrigger;

	TArray<UAudioComponent*> SoundsToTrigger;

	TArray<AActor*> ObjectsToTrigger;

	UFUNCTION()
		void DebugPing();

	UFUNCTION()
		void PlayNextSound();

	void PowerOnDoors();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnLevelEnded();
	void TriggerAll();
	
};
