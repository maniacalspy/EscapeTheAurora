// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableConsole.h"
#include "Engine/Engine.h"
#include "Test2Character.h"
#include "Components/StaticMeshComponent.h"

AInteractableConsole::AInteractableConsole() {
	pConsoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Console Mesh"));

	pConsoleMesh->SetupAttachment(RootComponent);
}

bool AInteractableConsole::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "download map");
}

void AInteractableConsole::OnInteract_Implementation(AActor* caller) {
	GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Green, TEXT("Map Downloaded!"));

	UPauseHudWidget* PauseMenu = nullptr;

	ATest2Character* Player = Cast<ATest2Character>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (Player) {
		PauseMenu = Player->GetPauseMenuInstance();
	}

	else {
	}

	if (PauseMenu) PauseMenu->EnableMap();

}