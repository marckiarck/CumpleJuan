// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Core/ObjectPool/BaseObjectPooler.h"

void UBaseObjectPooler::DestroyObject(UObject* objectReference)
{
	if (objectReference == nullptr)
	{
		return;
	}

	OnPooledObjectDestroyed<UObject>(objectReference);

	FName poolKey = GetPoolKey(objectReference->GetClass());
	if (poolsMap.Contains(poolKey))
	{
		UBaseObjectPool* pool = poolsMap[poolKey];
		pool->RemoveObjectFromPool<UObject>(objectReference);
	}
	else
	{
		if (objectReference->IsValidLowLevel())
		{
			objectReference->BeginDestroy();
		}
	}
}

void UBaseObjectPooler::SpawnActor(ULevel* spawnLevel, TSubclassOf<AActor> actorClass, FTransform spawnTransForm, FDataTableRowHandle creationDataHandle, AActor*& spawnedActor)
{
	UWorld* spawnWorld = spawnLevel->OwningWorld;
	if (spawnWorld == nullptr)
	{
		return;
	}

	FName poolKey = GetPoolKey(actorClass);
	if (poolsMap.Contains(poolKey))
	{
		UBaseObjectPool* pool = poolsMap[poolKey];
		spawnedActor = pool->GetObjectFromPool<AActor>();

		if (spawnedActor == nullptr)
		{
			spawnedActor = spawnWorld->SpawnActor<AActor>(actorClass);
			pool->AddObjectToPool(spawnedActor);
		}

	}
	else
	{
		UBaseObjectPool* newPool = NewObject<UBaseObjectPool>();
		spawnedActor = spawnWorld->SpawnActor<AActor>(actorClass);;
		poolsMap.Add(poolKey, newPool);
		newPool->AddObjectToPool(spawnedActor);
	}

	spawnedActor->SetActorTransform(spawnTransForm);
	spawnedActor->SetActorHiddenInGame(false);
	spawnedActor->SetActorEnableCollision(true);
	spawnedActor->SetActorTickEnabled(true);
	OnPooledObjectCreated<AActor>(spawnedActor, creationDataHandle);
}

void UBaseObjectPooler::DespawnActor(AActor* actorReference)
{
	if (actorReference == nullptr)
	{
		return;
	}

	OnPooledObjectDestroyed<UObject>(actorReference);

	FName poolKey = GetPoolKey(actorReference->GetClass());
	if (poolsMap.Contains(poolKey))
	{
		UBaseObjectPool* pool = poolsMap[poolKey];
		pool->RemoveObjectFromPool<AActor>(actorReference);

		actorReference->SetActorHiddenInGame(true);
		actorReference->SetActorEnableCollision(false);
		spawnedActor->SetActorTickEnabled(false);
		actorReference->SetActorLocation(FVector(MAX_FLT));
	}
	else
	{
		if (actorReference->IsValidLowLevel())
		{
			actorReference->Destroy();
		}
	}
}

FName UBaseObjectPooler::GetPoolKey(TSubclassOf<UObject> objectClass)
{
	return FName(objectClass->GetName());
}
