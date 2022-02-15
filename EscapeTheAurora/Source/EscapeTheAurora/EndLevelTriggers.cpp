 // Fill out your copyright notice in the Description page of Project Settings.

#include "EndLevelTriggers.h"
#include "EndLevelDoor.h"
#include "TimerDoor.h"
#include "Triggerable.h"
#include "Engine/Engine.h"

// Sets default values
AEndLevelTriggers::AEndLevelTriggers()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene component"));

}


void AEndLevelTriggers::PostInitializeComponents() {
	Super::PostInitializeComponents();

	GetComponents<ULightComponent>(LightsToTrigger, true);
	GetComponents<UAudioComponent>(SoundsToTrigger);

	TArray<AActor*> AttachedActors;
	GetAttachedActors(AttachedActors);
	Children.Append(AttachedActors);

	TArray<ULightComponent*> LightsToAdd = *new TArray<ULightComponent*>();
	TArray<UAudioComponent*> SoundsToAdd = *new TArray<UAudioComponent*>();



	for (auto Child : Children) {
		ITriggerable* TriggerInterface = Cast<ITriggerable>(Child);
		if (Child->GetClass()->ImplementsInterface(UTriggerable::StaticClass())) {
			ObjectsToTrigger.Add(Child);
		}

		else {
			Child->GetComponents<ULightComponent>(LightsToAdd, true);
			Child->GetComponents<UAudioComponent>(SoundsToAdd, true);
		}
		LightsToTrigger.Append(LightsToAdd);
		SoundsToTrigger.Append(SoundsToAdd);
	}

}

// Called when the game starts or when spawned
void AEndLevelTriggers::BeginPlay()
{
	Super::BeginPlay();
}

void AEndLevelTriggers::DebugPing() {
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("Ping!"));
}

void AEndLevelTriggers::PlayNextSound() {
	SoundsToTrigger.RemoveAt(0);

	if (SoundsToTrigger.Num() > 0) {
		if (SoundsToTrigger[0]) {
			(SoundsToTrigger[0])->OnAudioFinished.AddDynamic(this, &AEndLevelTriggers::PlayNextSound);
			SoundsToTrigger[0]->Play();
		}
	}

	else TriggerAll();
}

// Called every frame
void AEndLevelTriggers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AEndLevelTriggers::OnLevelEnded() {
	if (SoundsToTrigger.Num() > 0) {
		(SoundsToTrigger[0])->OnAudioFinished.AddDynamic(this, &AEndLevelTriggers::PlayNextSound);
		SoundsToTrigger[0]->Play();
	}

	else TriggerAll();
}


void AEndLevelTriggers::TriggerAll()
{
	for (auto Light : LightsToTrigger) {
		Light->SetIntensity(8);
	}

	for (auto TriggerObject : ObjectsToTrigger) {
		ITriggerable::Execute_OnTriggered(TriggerObject);
	}
}

