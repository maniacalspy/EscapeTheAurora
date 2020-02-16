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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Door")
		void PowerOn();

	virtual void PowerOn_Implementation();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Door")
		void CloseDoor();

	virtual void CloseDoor_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Door")
		void OpenDoor();

	virtual void OpenDoor_Implementation();

	UPROPERTY(VisibleAnywhere, Category = SkeletalMesh)
		class USkeletalMeshComponent* DoorFrameSkeleton;

	UPROPERTY(VisibleAnywhere, BluePrintReadWrite, Category = SkeletalMesh)
		class USkeletalMeshComponent* DoorPanelSkeleton;

	UPROPERTY(EditAnywhere, Category = Audio)
		class UAudioComponent* pOpenSound;

	void SwapDoorMaterial();

	class UMaterial* pPanelOffMaterial;

	class UMaterial* pPanelOnMaterial;

	bool bIsPowered;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
