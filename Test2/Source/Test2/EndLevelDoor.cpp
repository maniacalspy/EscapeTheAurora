// Fill out your copyright notice in the Description page of Project Settings.

#include "EndLevelDoor.h"
#include "Engine/Engine.h"
// Sets default values
AEndLevelDoor::AEndLevelDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorFrameSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Frame_Skeleton"));
	DoorPanelSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Panel_Skeleton"));
	pOpenSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Door_Open_Sound"));
	pOpenSound->bAutoActivate = false;
	
	

}

//get the panel's off material (not used currently)
void AEndLevelDoor::PostInitializeComponents() {
	Super::PostInitializeComponents();
	pPanelOffMaterial = DoorPanelSkeleton->GetMaterial(0)->GetMaterial();
}

// Called when the game starts or when spawned
void AEndLevelDoor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEndLevelDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEndLevelDoor::PowerOn() {
	if (pPanelOnMaterial) DoorPanelSkeleton->SetMaterial(0, pPanelOnMaterial->GetMaterial());
	OpenDoor();
}

//Changes the material and plays the door's opening animation
void AEndLevelDoor::OpenDoor()
{
	
	if (pOpenSound) pOpenSound->Play();
	DoorPanelSkeleton->Play(false);
}
