// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EscapeTheAuroraGameMode.generated.h"

UCLASS(minimalapi)
class AEscapeTheAuroraGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AEscapeTheAuroraGameMode();

	void EnableMap();
};



