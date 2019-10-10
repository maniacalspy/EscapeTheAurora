// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzleBlock.h"
#include "Components/BoxComponent.h"

// Sets default values
APuzzleBlock::APuzzleBlock()
{
	_isTipping = false;

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

}

void APuzzleBlock::OnBlockHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
		if (OtherActor->ActorHasTag("Player")) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("That Was The Player")));
			if (!_isTipping)
			{
				PushBlockOver(Hit.ImpactNormal);
				//_isTipping = true;
			}
		}
	}

}

void APuzzleBlock::PushBlockOver(FVector PushVector) {

	AddActorLocalOffset(PushVector);

	AddActorLocalRotation(*(new FQuat(PushVector, 1)));

}

