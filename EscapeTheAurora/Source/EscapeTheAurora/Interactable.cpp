// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "EscapeTheAuroraCharacter.h"
// Add default functionality here for any IInteractable functions that are not pure virtual.

bool IInteractable::SetPromptText(AActor* Caller, FString InText) {
		AEscapeTheAuroraCharacter* Player = Cast<AEscapeTheAuroraCharacter>(Caller);

		if (Player) {
			Player->SetInteractionPromptText(InText);
			return true;
		}
		return false;
}


bool IInteractable::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "interact");
}