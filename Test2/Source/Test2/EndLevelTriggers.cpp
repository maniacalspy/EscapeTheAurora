 // Fill out your copyright notice in the Description page of Project Settings.

#include "EndLevelTriggers.h"
#include "Engine/Engine.h"

// Sets default values
AEndLevelTriggers::AEndLevelTriggers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root_Component"));
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
		AEndLevelDoor* TheDoor = Cast<AEndLevelDoor>(Child);
		if (TheDoor) DoorsToTrigger.Add(TheDoor);
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
	
	//TriggerAll();


}

void AEndLevelTriggers::DebugPing() {
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("Ping!"));
}

void AEndLevelTriggers::PlayNextSound() {
	SoundsToTrigger.RemoveAt(0);
	//SoundsToTrigger.Shrink();
	if (SoundsToTrigger.Num() > 0) {
		if (SoundsToTrigger[0]) {
			(SoundsToTrigger[0])->OnAudioFinished.AddDynamic(this, &AEndLevelTriggers::PlayNextSound);
			SoundsToTrigger[0]->Play();
		}
	}

	else PowerOnDoors();
}

// Called every frame
void AEndLevelTriggers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEndLevelTriggers::PowerOnDoors() {

	for (auto Door : DoorsToTrigger) {
		Door->PowerOn();
	}
}

void AEndLevelTriggers::TriggerAll()
{
	for (auto Light : LightsToTrigger) {
		Light->SetIntensity(8);
	}

	/*
	for (auto Sound : SoundsToTrigger) {
		Sound->Play();
	}
	*/

	if (SoundsToTrigger[0]) {
		(SoundsToTrigger[0])->OnAudioFinished.AddDynamic(this, &AEndLevelTriggers::PlayNextSound);
		SoundsToTrigger[0]->Play();
	}

	else PowerOnDoors();
}

