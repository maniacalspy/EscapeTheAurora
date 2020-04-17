// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "IA_MedBayMonster.generated.h"

/**
 * 
 */
UCLASS()
class TEST2_API AIA_MedBayMonster : public AInteractableActor
{
	GENERATED_BODY()
	
public:
	AIA_MedBayMonster();

protected:
	
	UPROPERTY(EditAnywhere, Category = Mesh)
		class USkeletalMeshComponent* MeshComponent;

	virtual bool StartFocus_Implementation(AActor* Caller) override;
	virtual void OnInteract_Implementation(AActor* Caller) override;

};
