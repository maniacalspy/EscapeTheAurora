// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoweredDoor.h"
#include "Interactable.h"
#include "InteractableDoor.generated.h"

UCLASS()
class TEST2_API AInteractableDoor : public ADoorBase, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual bool StartFocus_Implementation(AActor* Caller) override;

	virtual void OnInteract_Implementation(AActor* Caller) override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
