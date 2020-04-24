// Fill out your copyright notice in the Description page of Project Settings.


#include "EditableTextWidget.h"

bool UEditableTextWidget::SetText(FString InText) {
	PromptTextString = "Press E to " + InText;
	return true;
}