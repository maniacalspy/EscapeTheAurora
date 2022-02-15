// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggeredMonster.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
ATriggeredMonster::ATriggeredMonster()
{
	_isMoving = false;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));

	MonsterComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Monster"));

	BreathingSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Breathing Audio"));
	BreathingSound->bAutoActivate = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));

	EndPoint = CreateDefaultSubobject<USceneComponent>(TEXT("MonsterEndPoint"));

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggeredMonster::OnTriggerOverlap);
	//RootComponent = MonsterComponent;
	MonsterComponent->SetupAttachment(RootComponent);
	BreathingSound->SetupAttachment(MonsterComponent);
	TriggerBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATriggeredMonster::BeginPlay()
{
	_initialLocation = MonsterComponent->GetComponentLocation();
	_travelDirection = (EndPoint->GetRelativeLocation() - MonsterComponent->GetRelativeLocation()).GetSafeNormal();
	Super::BeginPlay();
	
}

void ATriggeredMonster::PostInitializeComponents() {
	Super::PostInitializeComponents();
	
}

// Called every frame
void ATriggeredMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_isMoving) {
		FVector offset = (_travelDirection * MonsterMoveSpeed * DeltaTime);
		MonsterComponent->AddRelativeLocation(offset);
		if ((EndPoint->GetComponentLocation() - MonsterComponent->GetComponentLocation()).Size() < 30.f) {
			Destroy();
		}
	}
}

void ATriggeredMonster::OnTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& Hit) {
	if (OtherActor != NULL && OtherActor != this && OtherComp != NULL) {
		if (OtherActor->ActorHasTag("Player")) {
			_isMoving = true;
			MonsterComponent->SetVisibility(true);
			MonsterComponent->Play(true);
			BreathingSound->Play();
			//OverlappedComp->DestroyComponent();
		}
	}
}