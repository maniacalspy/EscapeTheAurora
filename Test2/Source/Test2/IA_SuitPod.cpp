// Fill out your copyright notice in the Description page of Project Settings.


#include "IA_SuitPod.h"
#include "components/StaticMeshComponent.h"
#include "engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/Engine.h"
#include "Test2Character.h"
#include "Materials/Material.h"

AIA_SuitPod::AIA_SuitPod() {

	RootComponent = CreateDefaultSubobject<USceneComponent>("Scene Component");

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));

	MeshComponent->SetupAttachment(RootComponent);
}

void AIA_SuitPod::OnInteract_Implementation(AActor* Caller) {

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this->GetOwner();
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Name = "SuitMesh";
	AStaticMeshActor* MeshActor;
	if (FullMesh != nullptr) {
		MeshActor = GetWorld()->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), GetActorLocation(), GetActorRotation(), SpawnParams);
		MeshActor->SetMobility(EComponentMobility::Movable);
		MeshActor->SetActorScale3D(GetActorScale3D());
		UStaticMeshComponent* ActorMeshComponent = MeshActor->GetStaticMeshComponent();
		ActorMeshComponent->SetStaticMesh(FullMesh);

		for (int i = 0; i < ActorMeshComponent->GetNumMaterials(); i++) {
			if (MeshMaterials[i]) ActorMeshComponent->SetMaterial(i, MeshMaterials[i]);
		}

		Destroy();
	}
}

bool AIA_SuitPod::StartFocus_Implementation(AActor* Caller) {
	return SetPromptText(Caller, "remove suit");
}