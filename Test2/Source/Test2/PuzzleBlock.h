// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"
#include <functional>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableActor.h"
#include "PuzzleBlock.generated.h"

class APuzzleGrid;
UCLASS()
class TEST2_API APuzzleBlock : public AInteractableActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleBlock();
	friend class APuzzleGrid;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

private:

	UPROPERTY(EditAnywhere, Category = "Puzzle Block")
		TArray<UStaticMesh*> _hologramMeshes;
	
	UPROPERTY(EditAnywhere)
		//the order here ends up being Top, Bottom, Front, Back, Left, Right
		TArray<UStaticMeshComponent*> _hologramComponents;

	bool _isTipping;
	bool _canBePushed;
	const FVector _boxExtents;
	FVector _rotatingAxis, _destLocation;
	FQuat _destRotation;

	typedef std::function<void()> VoidFunctionPtr;
	typedef std::function<void(FVector)> InVectorFunctionPtr;

	VoidFunctionPtr GridTippedCallBack;
	InVectorFunctionPtr GridMoveBlockCallBack;

	UPROPERTY(EditAnywhere, Category = Mesh)
		class UStaticMeshComponent* pBlockMesh;


	void TellGridBlockTipped();

	void SetDestLocation(FVector destLocation);
	void SetDestRotation(FQuat destRotation);

	void PushBlockOver();

	void SetAllCallBacks(VoidFunctionPtr ptippedCB, InVectorFunctionPtr pMoveCB);

	void EnableHologram(FVector PushSide);

	void DisableAllHolograms();

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool StartFocus_Implementation(AActor* Caller) override;

	virtual void EndFocus_Implementation() override;

	virtual void OnInteract_Implementation(AActor* Caller) override;

	UFUNCTION()
	void OnBlockHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);



	UPROPERTY(EditAnywhere, Category = "Puzzle Block")
		class UBoxComponent* MyComp;

	UPROPERTY(EditAnywhere, Category = Audio)
		class UAudioComponent* pTipEdgeSound;

	UPROPERTY(EditAnywhere, Category = Audio)
		class UAudioComponent* pTipSideSound;
};
