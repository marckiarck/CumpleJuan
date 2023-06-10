// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Core/SingletonRegister/BaseSingletonRegister.h"

UBaseSingletonRegister* UBaseSingletonRegister::instance = nullptr;

void UBaseSingletonRegister::GetInstance(TSubclassOf<UObject> objectClass, UObject*& OutActor)
{
	GetSingletonRegiter();

	const FName singletonKey = FName(objectClass->GetName());
	if (instance->registeredSingletonsMap.Contains(singletonKey))
	{
		OutActor = instance->registeredSingletonsMap[singletonKey];
	}
	else
	{
		OutActor = NewObject<UObject>(instance, objectClass);
		instance->registeredSingletonsMap.Add(singletonKey, OutActor);
	}
}

UBaseSingletonRegister* UBaseSingletonRegister::GetSingletonRegiter()
{
	if (instance == nullptr || instance->IsValidLowLevel() == false)
	{
		instance = NewObject<UBaseSingletonRegister>();
	}

	return instance;
}
