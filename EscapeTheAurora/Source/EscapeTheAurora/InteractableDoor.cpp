// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"

// Sets default values
AInteractableDoor::AInteractableDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

}

// Called when the game starts or when spawned
void AInteractableDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AInteractableDoor::StartFocus_Implementation(AActor* Caller) {
	if(!bIsOpen) return SetPromptText(Caller, "open door");
	else return SetPromptText(Caller, "close door");
	return false;
}

void AInteractableDoor::OnInteract_Implementation(AActor* Caller) {
	if (!bIsOpen) OpenDoor();
	else CloseDoor();
}