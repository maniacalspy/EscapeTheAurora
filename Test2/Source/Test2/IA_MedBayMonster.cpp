// Fill out your copyright notice in the Description page of Project Settings.


#include "IA_MedBayMonster.h"
#include "components/SkeletalMeshComponent.h"
#include "engine/Engine.h"


AIA_MedBayMonster::AIA_MedBayMonster() {
	RootComponent = CreateDefaultSubobject<USceneComponent>("Scene Component");

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Component"));

	MeshComponent->SetupAttachment(RootComponent);
}


bool AIA_MedBayMonster::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "desecrate body");
}


void AIA_MedBayMonster::OnInteract_Implementation(AActor* Caller) {
	GEngine->AddOnScreenDebugMessage(1, 4.f, FColor::Red, TEXT("Gross"));
}