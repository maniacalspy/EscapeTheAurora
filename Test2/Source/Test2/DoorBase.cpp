// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBase.h"
#include "Materials/Material.h"
#include "ConstructorHelpers.h"
// Sets default values
ADoorBase::ADoorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	static ConstructorHelpers::FObjectFinder<UMaterial> PanelOnMaterialAsset(TEXT("Material'/Game/FirstPerson/Textures/Door/DoorMaterial.DoorMaterial'"));
	if (PanelOnMaterialAsset.Succeeded()) {
		pPanelOnMaterial = PanelOnMaterialAsset.Object;
	}

	DoorFrameSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Frame_Skeleton"));


	DoorPanelSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Panel_Skeleton"));

	DoorPanelSkeleton->AnimationData.bSavedPlaying = false;

	pOpenSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Door_Open_Sound"));
	pOpenSound->bAutoActivate = false;

}

// Called when the game starts or when spawned
void ADoorBase::BeginPlay()
{
	Super::BeginPlay();
	
	if (bIsPowered) {
		SwapDoorMaterial();
	}
}

// Called every frame
void ADoorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorBase::PowerOn_Implementation() {
	SwapDoorMaterial();
	bIsPowered = true;
}

void ADoorBase::OpenDoor_Implementation() {
	if (bIsPowered && !bIsOpen) {
		if (pOpenSound) pOpenSound->Play();
		DoorPanelSkeleton->SetPlayRate(1.f);
		DoorPanelSkeleton->Play(false);
		bIsOpen = true;
	}
}

void ADoorBase::CloseDoor_Implementation() {
	DoorPanelSkeleton->SetPlayRate(-2.f);
	DoorPanelSkeleton->Play(false);
	bIsOpen = false;
}

void ADoorBase::SwapDoorMaterial() {
	if (pPanelOnMaterial) DoorPanelSkeleton->SetMaterial(0, pPanelOnMaterial->GetMaterial());
}