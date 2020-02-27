// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerDoor.h"
#include "Engine/Engine.h"
ATimerDoor::ATimerDoor() {
	PrimaryActorTick.bCanEverTick = true;
}


void ATimerDoor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (!bIsOpen) {
		if (bTimerIsRunning) {
			OpenDelayTimeSeconds -= DeltaTime;
		}

		if (OpenDelayTimeSeconds <= 0.f) {
			OpenDelayTimeSeconds = 0;
			OpenDoor();
		}
	}
}