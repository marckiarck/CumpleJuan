// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/SingletonRegister/GC_SingletonRegister.h"

UGC_SingletonRegister* UGC_SingletonRegister::instance = nullptr;

void UGC_SingletonRegister::GetInstance(TSubclassOf<UObject> objectClass, UObject*& OutActor, FDataTableRowHandle singletonDataHandle)
{
	GetSingletonRegiter();

	const FName singletonKey = FName(objectClass->GetName());
	if (instance->registeredSingletonsMap.Contains(singletonKey))
	{
		OutActor = instance->registeredSingletonsMap[singletonKey];

		if (OutActor && OutActor->IsValidLowLevel())
		{
			if (IGC_Singleton* singletonInterface = Cast<IGC_Singleton>(OutActor))
			{
				singletonInterface->Execute_OnGetInstance(OutActor, singletonDataHandle);
			}

			ensureMsgf(OutActor, TEXT("Something went wrong during getting singleton instance"));
			return;
		}

	}
	
	OutActor = NewObject<UObject>(instance, objectClass);
	instance->registeredSingletonsMap.Add(singletonKey, OutActor);

	if (IGC_Singleton* singletonInterface = Cast<IGC_Singleton>(OutActor))
	{
		singletonInterface->Execute_OnInstanceCreated(OutActor, singletonDataHandle);
	}

	ensureMsgf(OutActor, TEXT("Something went wrong during getting singleton instance"));
}

UGC_SingletonRegister* UGC_SingletonRegister::GetSingletonRegiter()
{
	if (instance == nullptr || instance->IsValidLowLevel() == false)
	{
		instance = NewObject<UGC_SingletonRegister>();
	}

	return instance;
}
