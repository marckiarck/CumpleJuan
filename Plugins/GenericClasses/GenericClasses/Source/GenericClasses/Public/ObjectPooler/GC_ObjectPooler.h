// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GC_ObjectPool.h"
#include "GC_PooledObjectInterface.h"
#include "GC_ObjectPooler.generated.h"

UCLASS()
class GENERICCLASSES_API UGC_ObjectPooler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
		TMap<FName, UGC_ObjectPool*> poolsMap;

public:
	template<typename T>
	T* NewUObject(FDataTableRowHandle creationDataHandle);

	template<typename T>
	void DestroyUObject(T* objectReference);

	UFUNCTION(BlueprintCallable, Category = ObjectPooler)
		void DestroyObject(UObject* objectReference);

	template<typename T>
	T* SpawnActor(ULevel* spawnLevel, UClass* actorClass, FTransform spawnTransForm, FDataTableRowHandle creationDataHandle, bool collisionEnabled = true);

	UFUNCTION(BlueprintCallable, Category = ObjectPooler, meta = (DeterminesOutputType = "actorClass", DynamicOutputParam = "spawnedActor", AdvancedDisplay = "collisionEnabled"))
		void SpawnActor(ULevel* spawnLevel, TSubclassOf<AActor> actorClass, FTransform spawnTransForm, FDataTableRowHandle creationDataHandle, AActor*& spawnedActor, bool collisionEnabled = true);

	UFUNCTION(BlueprintCallable, Category = ObjectPooler)
		void DespawnActor(AActor* actorReference);

private:
	template<typename T>
	FName GetPoolKey();
	FName GetPoolKey(TSubclassOf<UObject> objectClass);

	template<typename T>
	void OnPooledObjectCreated(T* createdObject, FDataTableRowHandle creationDataHandle);

	template<typename T>
	void OnPooledObjectDestroyed(T* destroyedObject);
};

template<typename T>
T* UGC_ObjectPooler::NewUObject(FDataTableRowHandle creationDataHandle)
{
	T* pooledObject = nullptr;

	FName poolKey = GetPoolKey<T>();
	if (poolsMap.Contains(poolKey))
	{
		UGC_ObjectPool* pool = poolsMap[poolKey];
		T* pooledObject = pool->GetObjectFromPool<T>();

		if (pooledObject == nullptr)
		{
			pooledObject = NewObject<T>();
			pool->AddObjectToPool(pooledObject);
		}

	}
	else
	{
		UGC_ObjectPool* newPool = NewObject<UGC_ObjectPool>();
		T* pooledObject = NewObject<T>();
		poolsMap.Add(poolKey, newPool);
		newPool->AddObjectToPool(pooledObject);
	}

	OnPooledObjectCreated<T>(pooledObject, creationDataHandle);

	return pooledObject;
}

template<typename T>
void UGC_ObjectPooler::DestroyUObject(T* objectReference)
{
	if (objectReference == nullptr)
	{
		return;
	}

	OnPooledObjectDestroyed<T>(objectReference);

	FName poolKey = GetPoolKey<T>();
	if (poolsMap.Contains(poolKey))
	{
		UGC_ObjectPool* pool = poolsMap[poolKey];
		pool->RemoveObjectFromPool<T>(objectReference);
	}
	else
	{
		objectReference->BeginDestroy();
	}
}

template<typename T>
T* UGC_ObjectPooler::SpawnActor(ULevel* spawnLevel, UClass* actorClass, FTransform spawnTransForm, FDataTableRowHandle creationDataHandle, bool collisionEnabled /*= true*/)
{
	AActor* spawnedActor = nullptr;
	if (actorClass)
	{
		SpawnActor(spawnLevel, actorClass, spawnTransForm, creationDataHandle, spawnedActor, collisionEnabled);
	}
	else
	{
		SpawnActor(spawnLevel, T::StaticClass(), spawnTransForm, creationDataHandle, spawnedActor, collisionEnabled);
	}

	return Cast<T>(spawnedActor);
}

template<typename T>
FName UGC_ObjectPooler::GetPoolKey()
{
	return T::StaticClass()->GetName();
}

template<typename T>
void UGC_ObjectPooler::OnPooledObjectCreated(T* createdObject, FDataTableRowHandle creationDataHandle)
{

	if (IGC_PooledObjectInterface* pooledObjectInterface = Cast<IGC_PooledObjectInterface>(createdObject))
	{
		pooledObjectInterface->OnPooledObjectCreated(creationDataHandle);
		pooledObjectInterface->Execute_BeginPlay_PooledObject(createdObject);
	}
}

template<typename T>
void UGC_ObjectPooler::OnPooledObjectDestroyed(T* destroyedObject)
{

	if (IGC_PooledObjectInterface* pooledObjectInterface = Cast<IGC_PooledObjectInterface>(destroyedObject))
	{
		pooledObjectInterface->OnPooledObjectDestroyed();
		pooledObjectInterface->Execute_BeginDestroy_PooledObject(destroyedObject);
	}
}