// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"
#include "Test2Character.h"
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
	if (bIsPowered) {
		ATest2Character* Player = Cast<ATest2Character>(Caller);
		if (Player) {
			if(!bIsOpen) Player->SetInteractionPromptText("open door");
			else Player->SetInteractionPromptText("close door");
			return true;
		}
	}
	return false;
}

void AInteractableDoor::OnInteract_Implementation(AActor* Caller) {
	if (bIsPowered) {
		if (!bIsOpen) OpenDoor();
		else CloseDoor();
	}
}