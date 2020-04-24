// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "Components/AudioComponent.h"
#include "IA_SuitPod.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API AIA_SuitPod : public AInteractableActor
{
	GENERATED_BODY()
	

public:
	AIA_SuitPod();

protected:

	UPROPERTY(EditAnywhere, Category = Mesh)
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, Category = "Suit Pod Mesh")
		class UStaticMesh* FullMesh;

	UPROPERTY(EditAnywhere, Category = "Suit Pod Mesh")
		TArray<class UMaterial*> MeshMaterials;

	UPROPERTY(EditAnywhere, Category = Audio)
		class UAudioComponent* Suitoff;
	
	virtual bool StartFocus_Implementation(AActor* Caller) override;
	virtual void OnInteract_Implementation(AActor* Caller) override;
};
