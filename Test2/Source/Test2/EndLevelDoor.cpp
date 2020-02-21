// Fill out your copyright notice in the Description page of Project Settings.

#include "EndLevelDoor.h"
#include "Engine/Engine.h" 
// Sets default values
AEndLevelDoor::AEndLevelDoor()
{

	

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

void AEndLevelDoor::PowerOn_Implementation() {
	Super::PowerOn_Implementation();
	OpenDoor_Implementation();
}

//Changes the material and plays the door's opening animation
void AEndLevelDoor::OpenDoor_Implementation()
{
	Super::OpenDoor_Implementation();
}
