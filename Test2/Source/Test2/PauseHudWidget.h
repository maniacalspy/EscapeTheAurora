// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "HUDWidgetBase.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseHudWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API UPauseHudWidget : public UHUDWidgetBase
{
	GENERATED_BODY()
	
public:
	//void Setup();

	//void OpenMenu();
	
	//UFUNCTION(BlueprintCallable)
	//	void CloseMenu();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Map")
		void EnableMap();

//protected:
//	UWorld* World;
//	APlayerController* PlayerController;
};
