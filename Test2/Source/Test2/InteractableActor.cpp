// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"
#include "Engine/Engine.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void  AInteractableActor::OnInteract_Implementation(AActor* Caller) {
	Destroy();
}

bool AInteractableActor::StartFocus_Implementation(AActor* Caller) {
	return true;
}


void AInteractableActor::EndFocus_Implementation() {
}