// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleBlock.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "ConstructorHelpers.h"
// Sets default values
APuzzleBlock::APuzzleBlock() : BoxExtents(*new FVector(16,16,31))
{
	_isTipping = false;
	_canBePushed = true;
	//InitialForward = GetActorForwardVector();
	//InitialRight = GetActorRightVector();

	RotatingAxis = GetActorRightVector();
	DestLocation = GetActorLocation();
	DestRotation = GetActorQuat();



 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	MyComp->SetupAttachment(RootComponent);
	MyComp->SetRelativeLocation(*new FVector(0, 0, 31.f));
	MyComp->SetBoxExtent(BoxExtents);
	//MyComp->SetRelativeScale3D(*new FVector(.45f, .45f, .9f));


	MyComp->SetSimulatePhysics(false);
	MyComp->SetNotifyRigidBodyCollision(true);
	MyComp->CanCharacterStepUpOn = ECB_No;


	MyComp->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	MyComp->OnComponentHit.AddDynamic(this, &APuzzleBlock::OnBlockHit);
	RootComponent = MyComp;

	pBlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block_Mesh"));
	pBlockMesh->SetupAttachment(RootComponent);

	pBlockMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Block_Material"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BatteryMeshAsset(TEXT("StaticMesh'/Game/FirstPerson/Assets/Battery_1_0.Battery_1_0'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> BatteryMaterialAsset(TEXT("Material'/Game/FirstPerson/Textures/Battery/Battery.Battery'"));

	if (BatteryMeshAsset.Succeeded())
	{
		pBlockMesh->SetStaticMesh(BatteryMeshAsset.Object);
		if (BatteryMaterialAsset.Succeeded()) {
			pBlockMesh->SetMaterial(0, BatteryMaterialAsset.Object);
		}
		pBlockMesh->SetRelativeLocation(*new FVector(0, 0, -(BoxExtents.Z / 2) * 2));
	}


	
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
		if (OtherActor->ActorHasTag("Player")) {
			if (!_isTipping && _canBePushed)
			{

				FVector PushVector = Hit.ImpactNormal;
				GridMoveBlockCallBack(PushVector);
				/*DestLocation = GridGetLocationCallBack(Hit.ImpactNormal);//GetActorLocation() + *new FVector(PushVector.X, PushVector.Y, 0) * 33;
				if (DestLocation != GetActorLocation()) {
					FVector PushXY, ForwardXY, RightXY;
					PushXY = *new FVector(PushVector.X, PushVector.Y, 0);
					ForwardXY = *new FVector(InitialForward.X, InitialForward.Y, 0);
					RightXY = *new FVector(InitialRight.X, InitialRight.Y, 0);

					float CosForwardAngle = (FVector::DotProduct(PushXY, ForwardXY) / (PushXY.Size() * ForwardXY.Size()));
					float CosRightAngle = (FVector::DotProduct(PushXY, RightXY) / (PushXY.Size() * RightXY.Size()));
					RotatingAxis = InitialRight;
					int RotationDirection = CosForwardAngle > 0 ? 1 : -1;
					if (FMath::Abs(CosRightAngle) > FMath::Abs(CosForwardAngle)) {
						RotatingAxis = InitialForward;
						RotationDirection = CosRightAngle > 0 ? -1 : 1;
					}

					DestRotation = *new FQuat(RotatingAxis, RotationDirection * M_PI_2) * GetActorQuat();
					_isTipping = true;
					_canBePushed = false;
				}
				*/
			}
		}
	}

}

void APuzzleBlock::TellGridBlockTipped() {
	if (GridTippedCallBack != nullptr) {
		GridTippedCallBack();
	}
}

void APuzzleBlock::SetTippedCallBack(std::function<void()> pfunc) {
	GridTippedCallBack = pfunc;
}

void APuzzleBlock::SetAllCallBacks(VoidFunctionPtr ptippedCB, InVectorFunctionPtr pMoveCB)
{
	GridTippedCallBack = ptippedCB;
	GridMoveBlockCallBack = pMoveCB;
}

//void APuzzleBlock::SetAllCallBacks(std::function<void()> ptippedCB, std::function<FVector(FVector)> pLocationCB, std::function<void()> pMoveCB) {
//
//}

void APuzzleBlock::PushBlockOver() {
	float Alpha = .05f;
	bool needsTranslation = false;
	bool needsRotation = false;
	FVector CurrentLocation = GetActorLocation();
	FVector Distance = DestLocation - CurrentLocation;
	needsTranslation = (!FMath::IsNearlyZero(Distance.Size(), .01f)) ;
	
	
	

	FQuat CurrentRot;
	CurrentRot = GetActorQuat();


	needsRotation = !(FMath::IsNearlyZero(CurrentRot.AngularDistance(DestRotation), .005f));


	if (!needsTranslation && !needsRotation) {
		_isTipping = false;
		if (!needsRotation) SetActorRotation(DestRotation);
		if (GridTippedCallBack != nullptr) {
			_canBePushed = true;
			TellGridBlockTipped();
		}
	}
	else {
		if (needsTranslation)
		{
			FVector IntermediateVector = FMath::Lerp(CurrentLocation, DestLocation, Alpha);
			SetActorLocation(IntermediateVector);
		}
		if (needsRotation) {
			SetActorRotation(FQuat::Slerp(CurrentRot, DestRotation, Alpha));
		}
	}

}

//void APuzzleBlock::SetOwnerGrid(APuzzleGrid& newOwner) {
//	pOwnerGrid = &newOwner;
//}


void APuzzleBlock::SetDestLocation(FVector destLocation) {
	DestLocation = destLocation;
	_isTipping = true;
}
void APuzzleBlock::SetDestRotation(FQuat destRotation) {
	DestRotation = destRotation;
	_isTipping = true;
}