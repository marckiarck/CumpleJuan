// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/SingletonRegister/GC_SingletonRegister.h"

UGC_SingletonRegister* UGC_SingletonRegister::instance = nullptr;

void UGC_SingletonRegister::GetInstance(TSubclassOf<UObject> objectClass, UObject*& OutActor)
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

UGC_SingletonRegister* UGC_SingletonRegister::GetSingletonRegiter()
{
	if (instance == nullptr || instance->IsValidLowLevel() == false)
	{
		instance = NewObject<UGC_SingletonRegister>();
	}

	return instance;
}
