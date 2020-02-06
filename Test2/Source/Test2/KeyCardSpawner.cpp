// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyCardSpawner.h"
#include "Engine/Engine.h"
// Sets default values
AKeyCardSpawner::AKeyCardSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene component"));
}

// Called when the game starts or when spawned
void AKeyCardSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyCardSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKeyCardSpawner::SpawnKey() {
	UObject* SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("/Game/FirstPersonCPP/Blueprints/Keycard_BP.Keycard_BP")));

	UBlueprint* GeneratedBP = Cast<UBlueprint>(SpawnActor);
	if (!SpawnActor)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("CANT FIND OBJECT TO SPAWN")));
		return;
	}

	UClass* SpawnClass = SpawnActor->StaticClass();
	if (SpawnClass == NULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("CLASS == NULL")));
		return;
	}

	UWorld* World = GetWorld();
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	World->SpawnActor<AActor>(GeneratedBP->GeneratedClass, GetActorLocation(), GetActorRotation(), SpawnParams);
}

