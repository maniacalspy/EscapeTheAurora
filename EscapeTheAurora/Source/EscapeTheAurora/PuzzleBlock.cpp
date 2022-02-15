 // Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleBlock.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "Engine/StaticMesh.h"
#include "Components/AudioComponent.h"
#include "Components/MeshComponent.h"
#include "ConstructorHelpers.h"
#include "EscapeTheAuroraCharacter.h"

// Sets default values
APuzzleBlock::APuzzleBlock() : _boxExtents(*new FVector(32,32,62))
{
	_isTipping = false;
	_canBePushed = true;

	_rotatingAxis = GetActorRightVector();
	_destLocation = GetActorLocation();
	_destRotation = GetActorQuat();

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	MyComp->SetupAttachment(RootComponent);
	MyComp->SetRelativeLocation(*new FVector(0, 0, _boxExtents.Z));
	MyComp->SetBoxExtent(_boxExtents);


	MyComp->SetSimulatePhysics(false);
	MyComp->CanCharacterStepUpOn = ECB_No;


	MyComp->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	RootComponent = MyComp;

	pTipEdgeSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Edge_Tip_Sound"));
	pTipEdgeSound->bAutoActivate = false;
	pTipSideSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Side_Tip_Sound"));
	pTipSideSound->bAutoActivate = false;

	static ConstructorHelpers::FObjectFinder<USoundBase> EdgeTipSoundAsset(TEXT("SoundWave'/Game/Audio/SFX/TipOnEdge.TipOnEdge'"));
	static ConstructorHelpers::FObjectFinder<USoundBase> SideTipSoundAsset(TEXT("SoundWave'/Game/Audio/SFX/TipOnSide.TipOnSide'"));

	if (EdgeTipSoundAsset.Succeeded()) {
		pTipEdgeSound->SetSound(EdgeTipSoundAsset.Object);
	}

	if (SideTipSoundAsset.Succeeded()) {
		pTipSideSound->SetSound(SideTipSoundAsset.Object);
	}


	pBlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block_Mesh"));
	pBlockMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BatteryMeshAsset(TEXT("StaticMesh'/Game/FirstPerson/Meshes/Battery_2_0_BlockV2.Battery_2_0_BlockV2'"));

	if (BatteryMeshAsset.Succeeded())
	{
		pBlockMesh->SetStaticMesh(BatteryMeshAsset.Object);
		pBlockMesh->SetRelativeLocation(*new FVector(0, 0, -(_boxExtents.Z)));
	}
	
}

// Called when the game starts or when spawned
void APuzzleBlock::BeginPlay()
{
	Super::BeginPlay();
}

void APuzzleBlock::PostInitializeComponents() {
	Super::PostInitializeComponents();

	if (_hologramMeshes.Num() > 0) {
		for (auto mesh : _hologramMeshes) {
			UStaticMeshComponent* Component = NewObject<UStaticMeshComponent>(pBlockMesh, mesh->GetFName());
			Component->RegisterComponent();
			Component->InitializeComponent();
			Component->AttachToComponent(pBlockMesh, FAttachmentTransformRules::SnapToTargetIncludingScale);
			Component->SetStaticMesh(mesh);
			//Component->SetRelativeLocation(*new FVector(-32, 0, 30));
			_hologramComponents.Add(Component);
		}
	}

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
		//playing the tipping sound here gave it a delay that felt wrong, so the puzzle grid tells the block to play the sound through this class' properties
		DisableAllHolograms();
		GridTippedCallBack();
	}
}


///<summary> Set all the puzzle block's callback functions, this is a setter dependency injection
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

	float Alpha = GetWorld()->GetDeltaSeconds() * 10;
	bool needsTranslation = false;
	bool needsRotation = false;
	FVector CurrentLocation = GetActorLocation();
	FVector Distance = _destLocation - CurrentLocation;
	needsTranslation = (!FMath::IsNearlyZero(Distance.Size(), .01f)) ;

	FQuat CurrentRot;
	CurrentRot = GetActorQuat();

	needsRotation = !(FMath::IsNearlyZero(CurrentRot.AngularDistance(_destRotation), .005f));


	if (!needsTranslation && !needsRotation) {
		_isTipping = false;
		if (!needsRotation) SetActorRotation(_destRotation);
		if (GridTippedCallBack != nullptr) {
			_canBePushed = true;
			TellGridBlockTipped();
		}
	}
	else {
		if (needsTranslation)
		{
			FVector IntermediateVector = FMath::Lerp(CurrentLocation, _destLocation, Alpha);
			SetActorLocation(IntermediateVector);
		}
		if (needsRotation) {
			SetActorRotation(FQuat::Slerp(CurrentRot, _destRotation, Alpha), ETeleportType::ResetPhysics);
		}
	}

}

bool APuzzleBlock::StartFocus_Implementation(AActor* Caller) {
	if (_canBePushed) {
		return SetPromptText(Caller, "push block");
	}
	return false;
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
	_destLocation = destLocation;
	_isTipping = true;
}

void APuzzleBlock::SetDestRotation(FQuat destRotation) {
	_destRotation = destRotation;
	_isTipping = true;
}

void APuzzleBlock::EnableHologram(FVector PushSide) {
	if (_hologramComponents.Num() > 0) {
		FVector Axis[] = { GetActorUpVector().GetSafeNormal(), -GetActorUpVector().GetSafeNormal(), GetActorForwardVector().GetSafeNormal(),
		-GetActorForwardVector().GetSafeNormal() ,  -GetActorRightVector().GetSafeNormal() , GetActorRightVector().GetSafeNormal() };

		for (int i = 0; i < 6; i++) {
			if (Axis[i].Equals(PushSide, .05)) {
				_hologramComponents[i]->SetVisibility(true);
				break;
			}
		}
	}
}

void APuzzleBlock::DisableAllHolograms() {
	for (auto Component : _hologramComponents) {
		Component->SetVisibility(false);
	}
}