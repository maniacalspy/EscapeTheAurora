// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"
#include "Engine/Engine.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void  AInteractableActor::OnInteract_Implementation(AActor* Caller) {
	Destroy();
}

void AInteractableActor::StartFocus_Implementation() {
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Start Focus"));
}


void AInteractableActor::EndFocus_Implementation() {
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("End Focus"));
}