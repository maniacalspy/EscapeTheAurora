// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUDWidgetBase.h"
#include "ETAHUD.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEAURORA_API UETAHUD : public UHUDWidgetBase
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void PlayDownload();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UWidgetAnimation* MapAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UWidgetAnimation* AudioAnimation;


};
