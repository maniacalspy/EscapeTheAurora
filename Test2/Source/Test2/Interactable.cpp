// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "Test2Character.h"
// Add default functionality here for any IInteractable functions that are not pure virtual.

bool IInteractable::SetPromptText(AActor* Caller, FString InText) {
		ATest2Character* Player = Cast<ATest2Character>(Caller);

		if (Player) {
			Player->SetInteractionPromptText(InText);
			return true;
		}
		return false;
}


bool IInteractable::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "interact");
}