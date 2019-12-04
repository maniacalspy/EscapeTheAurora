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



	for (auto Child : Children) {
		Child->GetComponents<ULightComponent>(LightsToAdd, true);
		AEndLevelDoor* TheDoor = Cast<AEndLevelDoor>(Child);
		if (TheDoor) DoorsToTrigger.Add(TheDoor);
		LightsToTrigger.Append(LightsToAdd);
	}

	
}

// Called when the game starts or when spawned
void AEndLevelTriggers::BeginPlay()
{
	Super::BeginPlay();
	
	//TriggerAll();


}

// Called every frame
void AEndLevelTriggers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEndLevelTriggers::TriggerAll()
{
	for (auto Light : LightsToTrigger) {
		Light->SetIntensity(8);
	}

	for (auto Sound : SoundsToTrigger) {
		Sound->Play();
	}

	for (auto Door : DoorsToTrigger) {
		Door->OpenDoor();
	}
}

