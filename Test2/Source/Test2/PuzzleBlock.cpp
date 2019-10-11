// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleBlock.h"
#include "Components/BoxComponent.h"
#define _USE_MATH_DEFINES
#include <math.h>

// Sets default values
APuzzleBlock::APuzzleBlock()
{
	_isTipping = false;

	RotatingAxis = GetActorRightVector();
	DestLocation = GetActorLocation();
	DestRotation = GetActorRotation();


 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block_Mesh"));


	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	MyComp->SetRelativeLocation(*new FVector(0, 0, 31.f));
	//MyComp->SetRelativeScale3D(*new FVector(.45f, .45f, .9f));

	
	MyComp->SetSimulatePhysics(false);
	MyComp->SetNotifyRigidBodyCollision(true);
	MyComp->CanCharacterStepUpOn = ECB_No;


	MyComp->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	MyComp->OnComponentHit.AddDynamic(this, &APuzzleBlock::OnBlockHit);
}

// Called when the game starts or when spawned
void APuzzleBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuzzleBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_isTipping) PushBlockOver();
}

void APuzzleBlock::OnBlockHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
		if (OtherActor->ActorHasTag("Player")) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("That Was The Player")));
			if (!_isTipping)
			{
				FVector PushVector = Hit.ImpactNormal;
				DestLocation = GetActorLocation() + PushVector;
				FVector PushXY, ForwardXY, RightXY;
				PushXY = *new FVector(PushVector.X, PushVector.Y, 0);
				ForwardXY = *new FVector(GetActorForwardVector().X, GetActorForwardVector().Y, 0);
				RightXY = *new FVector(GetActorRightVector().X, GetActorRightVector().Y, 0);

				float ForwardAngle = acosf(FVector::DotProduct(PushXY, ForwardXY) / (PushXY.Size() * ForwardXY.Size()));
				float RightAngle = acosf(FVector::DotProduct(PushXY, RightXY) / (PushXY.Size() * RightXY.Size()));

				if (ForwardAngle > M_PI / 2) ForwardAngle -= M_PI_2;
				if (RightAngle > M_PI / 2) RightAngle -= M_PI_2;
				RotatingAxis = GetActorRightVector();
				if (RightAngle < ForwardAngle) RotatingAxis = GetActorForwardVector();
				DestRotation = GetActorRotation() + *new FRotator(*new FQuat(RotatingAxis, M_PI_2));
				_isTipping = true;
			}
		}
	}

}

void APuzzleBlock::PushBlockOver() {
	float Alpha = .05f;
	bool needsTranslation = false;
	bool needsRotation = false;
	FVector CurrentLocation = GetActorLocation();
	FVector Distance = DestLocation - CurrentLocation;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("%s, %s, %s"), *DestLocation.ToString(), *CurrentLocation.ToString(), *(Distance).ToString()));
	needsTranslation = (!FMath::IsNearlyZero(Distance.Size(), .01f)) ;
	if (needsTranslation)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("still needs translation")));
	}
	
	

	FRotator CurrentRot;
	CurrentRot = GetActorRotation();

	if (!(DestRotation - CurrentRot).IsNearlyZero(.01f)) {
		needsRotation = true;
	}

	if (!needsTranslation && !needsRotation) _isTipping = false;
	else {
		if (needsTranslation)
		{
			SetActorLocation(FMath::Lerp(CurrentLocation, DestLocation, Alpha));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NeedsTranslation")));
		}
		if (needsRotation) {
			SetActorRotation(FMath::Lerp(CurrentRot, DestRotation, Alpha));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NeedsRotation")));
		}
	}

}

