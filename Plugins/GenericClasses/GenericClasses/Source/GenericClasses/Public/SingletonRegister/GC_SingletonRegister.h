// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GC_SingletonRegister.generated.h"


UCLASS(BlueprintType, Blueprintable)
class GENERICCLASSES_API UGC_SingletonRegister : public UObject
{
	GENERATED_BODY()

private:
	static UPROPERTY(Transient) UGC_SingletonRegister* instance;

	UPROPERTY(Transient)
		TMap<FName, UObject*> registeredSingletonsMap;

public:
	template<typename T>
	static T* GetInstance();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Singleton, meta = (DeterminesOutputType = "objectClass", DynamicOutputParam = "outObject"))
		static void GetInstance(TSubclassOf<UObject> objectClass, UObject*& outObject);

private:
	template<typename T>
	static FName GetSingletonKey();

	static UGC_SingletonRegister* GetSingletonRegiter();
};

template<typename T>
T* UGC_SingletonRegister::GetInstance()
{
	GetSingletonRegiter();

	T* objectInstance = nullptr;
	const FName singletonKey = GetSingletonKey<T>();
	if (instance->registeredSingletonsMap.Contains(singletonKey))
	{
		objectInstance = Cast<T>(instance->registeredSingletonsMap[singletonKey]);
		if (objectInstance == nullptr || objectInstance->IsValidLowLevel() == false)
		{
			objectInstance = NewObject<T>();
		}
	}
	else
	{
		objectInstance = NewObject<T>();
		instance->registeredSingletonsMap.Add(singletonKey, objectInstance);
	}

	return objectInstance;
}

template<typename T>
FName UGC_SingletonRegister::GetSingletonKey()
{
	return FName(T::StaticClass()->GetName());
}
