// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Core/ObjectPool/BaseObjectPool.h"

void UBaseObjectPool::AddObjectToPool(void* addedObject)
{
	usedObjects.Add(addedObject);
}
