// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableConsole.h"
#include "Engine/Engine.h"
#include "Test2GameMode.h"
#include "Components/StaticMeshComponent.h"

AInteractableConsole::AInteractableConsole() {
	pConsoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Console Mesh"));

	pConsoleMesh->SetupAttachment(RootComponent);
}

bool AInteractableConsole::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "download map");
}

void AInteractableConsole::OnInteract_Implementation(AActor* caller) {
	ATest2GameMode* gamemode = Cast<ATest2GameMode>(GetWorld()->GetAuthGameMode());

	if (gamemode) gamemode->EnableMap();

}