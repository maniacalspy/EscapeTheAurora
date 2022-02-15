// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "InteractableActor.generated.h"

UCLASS()
class ESCAPETHEAURORA_API AInteractableActor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	virtual void OnInteract_Implementation(AActor* Caller) override;
	//Called when the actor becomes focused by the player, returns true if the interaction prompt needs to be opened
	virtual bool StartFocus_Implementation(AActor* Caller) override;
	virtual void EndFocus_Implementation() override;

};
