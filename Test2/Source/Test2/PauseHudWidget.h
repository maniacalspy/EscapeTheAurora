// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseHudWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API UPauseHudWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup();

	void OpenMenu();
	
	UFUNCTION(BlueprintCallable)
		void CloseMenu();

private:
	UWorld* World;
	APlayerController* PlayerController;
};
