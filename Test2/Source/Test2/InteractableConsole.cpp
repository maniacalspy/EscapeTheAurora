// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableConsole.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"

AInteractableConsole::AInteractableConsole() {
	pConsoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Console Mesh"));

	pConsoleMesh->SetupAttachment(RootComponent);
}


void AInteractableConsole::OnInteract_Implementation(AActor* caller) {
	GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Green, TEXT("This is where the map download would occur"));
}