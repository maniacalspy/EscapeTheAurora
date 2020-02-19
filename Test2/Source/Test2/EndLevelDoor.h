// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/Material.h"
#include "DoorBase.h"
#include "EndLevelDoor.generated.h"

UCLASS()
class TEST2_API AEndLevelDoor : public ADoorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEndLevelDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OpenDoor_Implementation() override;

	void PowerOn_Implementation() override;


private:
	//UPROPERTY(VisibleAnywhere, Category = SkeletalMesh)
	//	class USkeletalMeshComponent* DoorFrameSkeleton;

	//UPROPERTY(VisibleAnywhere, Category = SkeletalMesh)
	//	class USkeletalMeshComponent* DoorPanelSkeleton;

	//UPROPERTY(EditAnywhere, Category = Audio)
	//	class UAudioComponent* pOpenSound;

	//	class UMaterial* pPanelOffMaterial;

	//	class UMaterial* pPanelOnMaterial;
};
