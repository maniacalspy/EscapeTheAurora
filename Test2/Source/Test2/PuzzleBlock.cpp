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
	RootComponent = MyComp;

	pBlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block_Mesh"));
	pBlockMesh->SetupAttachment(RootComponent);

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
			}
		}
	}

}

//Tells the puzzle grid the block tipped through the GridTippedCallBack function pointer
void APuzzleBlock::TellGridBlockTipped() {
	if (GridTippedCallBack != nullptr) {
		//play the block tipping sound here       SOUND!!!!!!!!!
		GridTippedCallBack();
	}
}


///<summary> Set all the puzzle block's callback functions
/// <param name="pTippedCB">pointer to function that should be called when the block is done tipping</param>
/// <param name="pMoveCB">pointer to function that should be called to get the block to move, the function must take in an FVector and return void</param>
///</summary>
void APuzzleBlock::SetAllCallBacks(VoidFunctionPtr pTippedCB, InVectorFunctionPtr pMoveCB)
{
	GridTippedCallBack = pTippedCB;
	GridMoveBlockCallBack = pMoveCB;
}


//Moves the block to DestLocation and DestRotation
void APuzzleBlock::PushBlockOver() {

	float Alpha = GetWorld()->GetDeltaSeconds() * 8;
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

void APuzzleBlock::StartFocus_Implementation() {
	GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::White, TEXT("Press E to Interact"));
}

void APuzzleBlock::EndFocus_Implementation() {
	GEngine->ClearOnScreenDebugMessages();
}

void APuzzleBlock::OnInteract_Implementation(AActor* Caller) {
	if (Caller->ActorHasTag("Player")) {
		if (!_isTipping && _canBePushed)
		{

			FVector PushVector = Caller->GetActorForwardVector();
			GridMoveBlockCallBack(PushVector);
		}
	}
}

void APuzzleBlock::SetDestLocation(FVector destLocation) {
	DestLocation = destLocation;
	_isTipping = true;
}

void APuzzleBlock::SetDestRotation(FQuat destRotation) {
	DestRotation = destRotation;
	_isTipping = true;
}