// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Characters/Spawner/BaseCharacterSpawner.h"
#include "CumpleJuan/Core/ObjectPool/BaseObjectPooler.h"
#include "CumpleJuan/Core/SingletonRegister/BaseSingletonRegister.h"

// Sets default values
ABaseCharacterSpawner::ABaseCharacterSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* rootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(rootComponent);
}

// Called when the game starts or when spawned
void ABaseCharacterSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	FString ContextString = TEXT("Character Spawner context");
	
	if (const UDataTable* spawnDatatable = spawnDataRowHandle.DataTable)
	{
		if (const FCharacterSpawnRow* spawnRow = spawnDatatable->FindRow<FCharacterSpawnRow>(spawnDataRowHandle.RowName, ContextString))
		{
			TSubclassOf<AActor> spawnClass = spawnRow->characterClass;
			if (UBaseObjectPooler* objectPooler = UBaseSingletonRegister::GetInstance<UBaseObjectPooler>())
			{
				objectPooler->SpawnActor(GetLevel(), spawnClass, GetActorTransform(), spawnDataRowHandle, spawnedActor);
			}
		}
	}
	
}


