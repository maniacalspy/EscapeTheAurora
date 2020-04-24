// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUDWidgetBase.h"
#include "EditableTextWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API UEditableTextWidget : public UHUDWidgetBase
{
	GENERATED_BODY()
	

public:
	bool SetText(FString InText);

protected:

	UPROPERTY(BlueprintReadWrite, Category = "Text")
		FString PromptTextString = "Press E to interact";
};
