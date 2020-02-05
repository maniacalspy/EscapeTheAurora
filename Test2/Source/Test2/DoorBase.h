// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
#include "DoorBase.generated.h"

UCLASS(abstract)
class TEST2_API ADoorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorBase();

	UFUNCTION()
		virtual void PowerOn();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION()
		virtual void OpenDoor() { check(0 && "You must override this"); };

	UPROPERTY(VisibleAnywhere, Category = SkeletalMesh)
		class USkeletalMeshComponent* DoorFrameSkeleton;

	UPROPERTY(VisibleAnywhere, BluePrintReadWrite, Category = SkeletalMesh)
		class USkeletalMeshComponent* DoorPanelSkeleton;

	UPROPERTY(EditAnywhere, Category = Audio)
		class UAudioComponent* pOpenSound;

	class UMaterial* pPanelOffMaterial;

	class UMaterial* pPanelOnMaterial;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
