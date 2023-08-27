// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/GC_CharacterSpawner.h"
#include "GenericClasses/Public/GenericClassesMinimals.h"

// Sets default values
AGC_CharacterSpawner::AGC_CharacterSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AGC_CharacterSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	FString ContextString = TEXT("Character Spawner context");

	if (const UDataTable* spawnDatatable = spawnDataRowHandle.DataTable)
	{
		if (const FGC_CharacterSpawnRow* spawnRow = spawnDatatable->FindRow<FGC_CharacterSpawnRow>(spawnDataRowHandle.RowName, ContextString))
		{
			TSubclassOf<AActor> spawnClass = characterClass;
			if (UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>())
			{
				spawnedCharacter = objectPooler->SpawnActor<AGC_Character>(GetLevel(), spawnClass, GetActorTransform(), spawnDataRowHandle);
			}
		}
	}
}

