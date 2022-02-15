// Fill out your copyright notice in the Description page of Project Settings.


#include "PoweredInteractableDoor.h"

bool APoweredInteractableDoor::StartFocus_Implementation(AActor* Caller) {
	if (bIsPowered) {
		if (!bIsOpen) return SetPromptText(Caller, "open door");
		else return SetPromptText(Caller, "close door");
	}
	return false;
}

void APoweredInteractableDoor::OnInteract_Implementation(AActor* Caller) {
	if (bIsPowered) {
		if (!bIsOpen) OpenDoor();
		else CloseDoor();
	}
}