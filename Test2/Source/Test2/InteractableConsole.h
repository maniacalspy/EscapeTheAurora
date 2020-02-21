// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "InteractableConsole.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API AInteractableConsole : public AInteractableActor
{
	GENERATED_BODY()
	

public:
	AInteractableConsole();

	UPROPERTY(EditAnyWhere)
		UStaticMeshComponent* pConsoleMesh;


	virtual void OnInteract_Implementation(AActor* Caller) override;
};
