// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DoorBase.h"
#include "Triggerable.h"
#include "PoweredDoor.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API APoweredDoor : public ADoorBase, public ITriggerable
{
	GENERATED_BODY()
	
public:
	APoweredDoor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Door")
		void PowerOn();

	virtual void PowerOn_Implementation();

protected:

	virtual void OpenDoor_Implementation() override;

	virtual void BeginPlay() override;

	/*void SwapDoorMaterial();*/

	class UMaterial* pPanelOffMaterial;

	//class UMaterial* pPanelOnMaterial;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Door")
		uint32 bIsPowered : 1;
};
