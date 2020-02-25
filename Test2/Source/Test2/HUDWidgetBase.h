// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API UHUDWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	

public:
	void Setup();

	void OpenMenu();

	UFUNCTION(BlueprintCallable)
		void CloseMenu();


protected:
	UWorld* World;
	APlayerController* PlayerController;

};
