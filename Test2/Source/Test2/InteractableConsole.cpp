// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableConsole.h"
#include "Engine/Engine.h"
#include "Test2GameMode.h"
#include "Components/StaticMeshComponent.h"

AInteractableConsole::AInteractableConsole() {
	pConsoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Console Mesh"));

	pConsoleMesh->SetupAttachment(RootComponent);

	bMapIsDownloaded = false;
}

bool AInteractableConsole::StartFocus_Implementation(AActor* Caller) {
	if (!bMapIsDownloaded) return SetPromptText(Caller, "download map");
	else return false;
}

void AInteractableConsole::OnInteract_Implementation(AActor* caller) {
	if (!bMapIsDownloaded) {
		ATest2GameMode* gamemode = Cast<ATest2GameMode>(GetWorld()->GetAuthGameMode());

		if (gamemode) gamemode->EnableMap();
	}
}