// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleBlock.h"
#include "Components/BoxComponent.h"
#define _USE_MATH_DEFINES
#include <math.h>

// Sets default values
APuzzleBlock::APuzzleBlock() : InitialForward(GetActorForwardVector()), InitialRight(GetActorRightVector())
{
	_isTipping = false;

	//InitialForward = GetActorForwardVector();
	//InitialRight = GetActorRightVector();

	RotatingAxis = GetActorRightVector();
	DestLocation = GetActorLocation();
	DestRotation = GetActorRotation();


 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block_Mesh"));


	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	MyComp->SetRelativeLocation(*new FVector(0, 0, 31.f));
	//MyComp->SetBoxExtent(UStaticMeshComponent::)
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
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, PushVector.ToString());
				DestLocation = GetActorLocation() + *new FVector(PushVector.X, PushVector.Y, 0) * 33;
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, DestLocation.ToString());
				if (DestLocation != GetActorLocation()) {
					FVector PushXY, ForwardXY, RightXY;
					PushXY = *new FVector(PushVector.X, PushVector.Y, 0);
					ForwardXY = *new FVector(InitialForward.X, InitialForward.Y, 0);
					RightXY = *new FVector(InitialRight.X, InitialRight.Y, 0);

					float CosForwardAngle = (FVector::DotProduct(PushXY, ForwardXY) / (PushXY.Size() * ForwardXY.Size()));
					float CosRightAngle = (FVector::DotProduct(PushXY, RightXY) / (PushXY.Size() * RightXY.Size()));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Forward: %f"), CosForwardAngle));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Right: %f"), CosRightAngle));
					RotatingAxis = InitialRight;
					int RotationDirection = CosForwardAngle > 0 ? 1 : -1;
					if (FMath::Abs(CosRightAngle) > FMath::Abs(CosForwardAngle)) {
						RotatingAxis = InitialForward;
						RotationDirection = CosRightAngle > 0 ? -1 : 1;
					}
					DestRotation = GetActorRotation() + *new FRotator(*new FQuat(RotatingAxis, RotationDirection * M_PI_2));
					_isTipping = true;
				}
			}
		}
	}

}

void APuzzleBlock::PushBlockOver() {
	float Alpha = .1f;
	bool needsTranslation = false;
	bool needsRotation = false;
	FVector CurrentLocation = GetActorLocation();
	FVector Distance = DestLocation - CurrentLocation;
	needsTranslation = (!FMath::IsNearlyZero(Distance.Size(), .01f)) ;
	//if (needsTranslation) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("still needs translation")));
	
	
	

	FRotator CurrentRot;
	CurrentRot = GetActorRotation();
	FRotator RotationDiff = DestRotation - CurrentRot;

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(*RotationDiff.ToString()));

	needsRotation = !RotationDiff.IsNearlyZero(.01f);
	//if (needsRotation) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("still needs Rotation")));


	if (!needsTranslation && !needsRotation) _isTipping = false;
	else {
		if (needsTranslation)
		{
			FVector IntermediateVector = FMath::Lerp(CurrentLocation, DestLocation, Alpha);
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, *IntermediateVector.ToString());
			SetActorLocation(IntermediateVector);
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NeedsTranslation")));
		}
		if (needsRotation) {
			SetActorRotation(FMath::Lerp(CurrentRot, DestRotation, Alpha));
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NeedsRotation")));
		}
	}

}

