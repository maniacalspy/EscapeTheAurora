// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EscapeTheAuroraGameMode.h"
#include "EscapeTheAuroraHUD.h"
#include "ETAHUD.h"
#include "HUDWidgetBase.h"
#include "PauseHudwidget.h"
#include "EscapeTheAuroraCharacter.h"
#include "Engine.h"
#include "UObject/ConstructorHelpers.h"

AEscapeTheAuroraGameMode::AEscapeTheAuroraGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	
	ConstructorHelpers::FClassFinder<UHUDWidgetBase> MenuClassFinder(TEXT("/Game/FirstPerson/UItesting/HUD"));

	//HUDClass = MenuClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEscapeTheAuroraHUD::StaticClass();
}

void AEscapeTheAuroraGameMode::EnableMap() {
	//GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Green, TEXT("Map Downloaded!"));

	UPauseHudWidget* PauseMenu = nullptr;

	UETAHUD* HUD = nullptr;

	AEscapeTheAuroraCharacter* Player = Cast<AEscapeTheAuroraCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (Player) {
		PauseMenu = Player->GetPauseMenuInstance();
		HUD = Player->GetGameHUDInstance();
		if (HUD) {
			HUD->PlayDownload();
		}
	}

	else {
	}

	if (PauseMenu) PauseMenu->EnableMap();

}