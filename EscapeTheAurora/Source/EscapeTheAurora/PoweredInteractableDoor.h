// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PoweredDoor.h"
#include "Interactable.h"
#include "PoweredInteractableDoor.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEAURORA_API APoweredInteractableDoor : public APoweredDoor, public IInteractable
{
	GENERATED_BODY()
	
public:
	virtual bool StartFocus_Implementation(AActor* Caller) override;

	virtual void OnInteract_Implementation(AActor* Caller) override;
};
