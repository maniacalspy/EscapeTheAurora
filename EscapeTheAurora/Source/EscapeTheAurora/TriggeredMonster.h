// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggeredMonster.generated.h"

UCLASS()
class ESCAPETHEAURORA_API ATriggeredMonster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggeredMonster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* MonsterComponent;

	UPROPERTY(VisibleAnywhere)
		class UAudioComponent* BreathingSound;

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* TriggerBox;

	UPROPERTY(VisibleAnywhere)
		class USceneComponent* EndPoint;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float MonsterMoveSpeed;

	FVector _initialLocation;
	FVector _travelDirection;

	bool _isMoving;

	UFUNCTION()
		void OnTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& Hit);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
