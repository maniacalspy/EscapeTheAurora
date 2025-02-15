// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DoorBase.h"
#include "TimerDoor.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEAURORA_API ATimerDoor : public ADoorBase
{
	GENERATED_BODY()
	
public:
	ATimerDoor();


	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Door")
		float OpenDelayTimeSeconds;

	UPROPERTY(EditAnywhere, Category = "Door")
		uint32 bTimerIsRunning : 1;
};
