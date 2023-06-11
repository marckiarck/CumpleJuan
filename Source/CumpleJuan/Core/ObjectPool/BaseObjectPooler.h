// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseObjectPool.h"
#include "BasePooledObjectInterface.h"
#include "BaseObjectPooler.generated.h"


UCLASS()
class CUMPLEJUAN_API UBaseObjectPooler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
		TMap<FName, UBaseObjectPool*> poolsMap;

public:
	template<typename T>
	T* NewUObject(FDataTableRowHandle creationDataHandle);
	
	template<typename T>
	void DestroyUObject(T* objectReference);

	UFUNCTION(BlueprintCallable, Category = ObjectPooler)
	void DestroyObject(UObject* objectReference);

	UFUNCTION(BlueprintCallable, Category = ObjectPooler, meta = (DeterminesOutputType = "actorClass", DynamicOutputParam = "spawnedActor"))
	void SpawnActor(ULevel* spawnLevel, TSubclassOf<AActor> actorClass, FTransform spawnTransForm, FDataTableRowHandle creationDataHandle, AActor*& spawnedActor);

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
T* UBaseObjectPooler::NewUObject(FDataTableRowHandle creationDataHandle)
{
	T* pooledObject = nullptr;

	FName poolKey = GetPoolKey<T>();
	if (poolsMap.Contains(poolKey))
	{
		UBaseObjectPool* pool = poolsMap[poolKey];
		T* pooledObject = pool->GetObjectFromPool<T>();

		if (pooledObject == nullptr)
		{
			pooledObject = NewObject<T>();
			pool->AddObjectToPool(pooledObject);
		}

	}
	else
	{
		UBaseObjectPool* newPool = NewObject<UBaseObjectPool>();
		T* pooledObject = NewObject<T>();
		poolsMap.Add(poolKey, newPool);
		newPool->AddObjectToPool(pooledObject);
	}

	OnPooledObjectCreated<T>(pooledObject, creationDataHandle);

	return pooledObject;
}

template<typename T>
void UBaseObjectPooler::DestroyUObject(T* objectReference)
{
	if (objectReference == nullptr)
	{
		return;
	}

	OnPooledObjectDestroyed<T>(objectReference);

	FName poolKey = GetPoolKey<T>();
	if (poolsMap.Contains(poolKey))
	{
		UBaseObjectPool* pool = poolsMap[poolKey];
		pool->RemoveObjectFromPool<T>(objectReference);
	}
	else
	{
		objectReference->BeginDestroy();
	}
}

template<typename T>
FName UBaseObjectPooler::GetPoolKey()
{
	return T::StaticClass()->GetName();
}

template<typename T>
void UBaseObjectPooler::OnPooledObjectCreated(T* createdObject, FDataTableRowHandle creationDataHandle)
{

	if (IBasePooledObjectInterface* pooledObjectInterface = Cast<IBasePooledObjectInterface>(createdObject))
	{
		pooledObjectInterface->OnPooledObjectCreated(creationDataHandle);
		pooledObjectInterface->Execute_BeginPlay_PooledObject(createdObject);
	}
}

template<typename T>
void UBaseObjectPooler::OnPooledObjectDestroyed(T* destroyedObject)
{

	if (IBasePooledObjectInterface* pooledObjectInterface = Cast<IBasePooledObjectInterface>(destroyedObject))
	{
		pooledObjectInterface->OnPooledObjectDestroyed();
		pooledObjectInterface->Execute_BeginDestroy_PooledObject(destroyedObject);
	}
}