// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"
#include "PuzzleGrid.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleBlock.generated.h"

UCLASS()
class TEST2_API APuzzleBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:
	bool _isTipping;
	bool _canBePushed;
	const FVector InitialForward, InitialRight, BoxExtents;
	FVector RotatingAxis, DestLocation;
	FQuat DestRotation;


	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class UStaticMeshComponent* BlockMesh;

	void TellGridBlockTipped();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBlockHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void PushBlockOver();

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* MyComp;

	
	class APuzzleGrid* pOwnerGrid;




};
