// Fill out your copyright notice in the Description page of Project Settings.


#include "IA_MedBayMonster.h"
#include "components/SkeletalMeshComponent.h"
#include "components/AudioComponent.h"
#include "engine/Engine.h"


AIA_MedBayMonster::AIA_MedBayMonster() {
	RootComponent = CreateDefaultSubobject<USceneComponent>("Scene Component");

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Component"));
	
	
	InteractSound = CreateDefaultSubobject<UAudioComponent>(TEXT("InteractSound"));

	MeshComponent->SetupAttachment(RootComponent);
}


bool AIA_MedBayMonster::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "investigate");
}


void AIA_MedBayMonster::OnInteract_Implementation(AActor* Caller) {
	if (MeshComponent->HasValidAnimationInstance()) MeshComponent->Play(false);
}