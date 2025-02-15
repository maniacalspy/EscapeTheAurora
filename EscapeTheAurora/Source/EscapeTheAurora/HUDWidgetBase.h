// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEAURORA_API UHUDWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	

public:
	void Setup();

	UFUNCTION(BlueprintCallable)
	void OpenMenu();

	UFUNCTION(BlueprintCallable)
		void CloseMenu();


protected:
	UWorld* World;
	APlayerController* PlayerController;

};
