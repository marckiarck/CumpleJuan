// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseObjectPool.h"
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
	T* NewUObject();
	
	template<typename T>
	void DestroyUObject(T* objectReference);

private:
	template<typename T>
	FName GetPoolKey();
};

template<typename T>
T* UBaseObjectPooler::NewUObject()
{

	FName poolKey = GetPoolKey<T>();
	if (poolsMap.Contains(poolKey))
	{
		UBaseObjectPool* pool = poolsMap[poolKey];
		T* pooledObject = pool->GetObjectFromPool<T>();

		if (pooledObject)
		{
			return pooledObject;
		}

		pooledObject = NewObject<T>();

		pool->AddObjectToPool(pooledObject);
	}
	else
	{
		UBaseObjectPool* newPool = NewObject<UBaseObjectPool>();
		T* pooledObject = NewObject<T>();
		poolsMap.Add(poolKey, newPool);
	}
}

template<typename T>
void UBaseObjectPooler::DestroyUObject(T* objectReference)
{
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
