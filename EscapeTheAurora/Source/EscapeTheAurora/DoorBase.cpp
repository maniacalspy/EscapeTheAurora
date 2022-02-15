// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBase.h"
#include "Materials/Material.h"
#include "ConstructorHelpers.h"
// Sets default values
ADoorBase::ADoorBase()
{

	DoorPanelSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Panel_Skeleton"));

	DoorPanelSkeleton->AnimationData.bSavedPlaying = false;

	pOpenSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Door_Open_Sound"));
	pOpenSound->bAutoActivate = false;

}

// Called when the game starts or when spawned
void ADoorBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADoorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorBase::OpenDoor_Implementation() {
	if (!bIsOpen) {
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
