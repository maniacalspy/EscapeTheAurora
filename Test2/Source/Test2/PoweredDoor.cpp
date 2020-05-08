// Fill out your copyright notice in the Description page of Project Settings.


#include "PoweredDoor.h"
#include "Materials/Material.h"
#include "ConstructorHelpers.h"

APoweredDoor::APoweredDoor() {
	/*static ConstructorHelpers::FObjectFinder<UMaterial> PanelOnMaterialAsset(TEXT("Material'/Game/FirstPerson/Textures/Door/DoorMaterial.DoorMaterial'"));
	if (PanelOnMaterialAsset.Succeeded()) {
		pPanelOnMaterial = PanelOnMaterialAsset.Object;
	}*/

}

void APoweredDoor::BeginPlay() {
	Super::BeginPlay();

	/*if (bIsPowered) {
		SwapDoorMaterial();
	}*/

}

void APoweredDoor::OpenDoor_Implementation() {
	if (bIsPowered && !bIsOpen) {
		if (pOpenSound) pOpenSound->Play();
		DoorPanelSkeleton->SetPlayRate(1.f);
		DoorPanelSkeleton->Play(false);
		bIsOpen = true;
	}
}

void APoweredDoor::PowerOn_Implementation() {
	//SwapDoorMaterial();
	bIsPowered = true;
}


//void APoweredDoor::SwapDoorMaterial() {
//	if (pPanelOnMaterial) DoorPanelSkeleton->SetMaterial(0, pPanelOnMaterial->GetMaterial());
//}