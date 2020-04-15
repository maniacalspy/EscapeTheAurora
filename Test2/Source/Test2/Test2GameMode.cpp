// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Test2GameMode.h"
#include "Test2HUD.h"
#include "Test2Character.h"
#include "UObject/ConstructorHelpers.h"

ATest2GameMode::ATest2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATest2HUD::StaticClass();
}

void ATest2GameMode::EnableMap() {
	//GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Green, TEXT("Map Downloaded!"));

	UPauseHudWidget* PauseMenu = nullptr;

	ATest2Character* Player = Cast<ATest2Character>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (Player) {
		PauseMenu = Player->GetPauseMenuInstance();
	}

	else {
	}

	if (PauseMenu) PauseMenu->EnableMap();

}