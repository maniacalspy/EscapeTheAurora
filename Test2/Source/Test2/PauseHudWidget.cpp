// Fill out your copyright notice in the Description page of Project Settings.

#include "PauseHudWidget.h"

//void UPauseHudWidget::Setup() {
//	World = GetWorld();
//	PlayerController = World->GetFirstPlayerController();
//}
//
//void UPauseHudWidget::OpenMenu() {
//	if (!World) {
//		this->Setup();
//	}
//	this->AddToViewport();
//	
//	
//	FInputModeGameAndUI InputModeData;
//	InputModeData.SetWidgetToFocus(this->TakeWidget());
//	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
//
//	PlayerController->SetInputMode(InputModeData);
//
//	PlayerController->bShowMouseCursor = true;
//}
//
//void UPauseHudWidget::CloseMenu() {
//	this->RemoveFromViewport();
//
//	FInputModeGameOnly InputModeData;
//	InputModeData.SetConsumeCaptureMouseDown(true);
//	
//	PlayerController->SetInputMode(InputModeData);
//
//	PlayerController->bShowMouseCursor = false;
//
//	PlayerController->SetPause(false);
//}