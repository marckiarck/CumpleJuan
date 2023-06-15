// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseObjectPool.generated.h"

UCLASS()
class CUMPLEJUAN_API UBaseObjectPool : public UObject
{
	friend class UBaseObjectPooler;

	GENERATED_BODY()


private:
	UPROPERTY(Transient)
	TArray<UObject*> usedObjects;
	UPROPERTY(Transient)
	TArray<UObject*> freeObjects;

public:
	template<typename T>
	T* GetObjectFromPool();

	template<typename T>
	void RemoveObjectFromPool(T* objectRemoved);

private:
	void AddObjectToPool(UObject* addedObject);
};

template<typename T>
T* UBaseObjectPool::GetObjectFromPool()
{
	T* freeObject = nullptr;
	while (freeObjects.Num() > 0)
	{
		freeObject = Cast<T>(freeObjects.Pop());
		if (freeObject && freeObject->IsValidLowLevel())
		{
			usedObjects.Add(freeObject);

			return freeObject;
		}

	}

	return nullptr;
}

template<typename T>
void UBaseObjectPool::RemoveObjectFromPool(T* objectRemoved)
{
	if (usedObjects.Remove(objectRemoved) > 0)
	{
		if (objectRemoved && objectRemoved->IsValidLowLevel())
		{
			freeObjects.Add(objectRemoved);
		}
	}
	
}
