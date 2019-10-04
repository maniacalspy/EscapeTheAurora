// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleBlockComponent.h"


// Sets default values for this component's properties
UPuzzleBlockComponent::UPuzzleBlockComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPuzzleBlockComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPuzzleBlockComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	PushBlockOver(*new FVector(1, 1, 1));
	// ...
}


void UPuzzleBlockComponent::PushBlockOver(FVector PushVector) {

	(this->GetOwner())->AddActorLocalOffset(PushVector);
	(this->GetOwner())->AddActorLocalRotation(*(new FQuat(this->GetOwner()->GetActorForwardVector(), 1)));

}

