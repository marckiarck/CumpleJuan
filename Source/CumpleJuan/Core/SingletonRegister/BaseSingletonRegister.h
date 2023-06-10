// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseSingletonRegister.generated.h"


UCLASS(BlueprintType, Blueprintable)
class CUMPLEJUAN_API UBaseSingletonRegister : public UObject
{
	GENERATED_BODY()
	
private:
	static UPROPERTY(Transient) UBaseSingletonRegister* instance;

	UPROPERTY(Transient)
	TMap<FName, UObject*> registeredSingletonsMap;

public:
	template<typename T>
	UFUNCTION(BlueprintCallable, Category = Singleton)
	static T* GetInstance();

	UFUNCTION(BlueprintCallable, Category = Singleton, meta=(DeterminesOutputType = "objectClass", DynamicOutputParam = "OutActor"))
	static void GetInstance(TSubclassOf<UObject> objectClass, UObject*& outActor);

private:
	template<typename T>
	FName GetSingletonKey();

	static UBaseSingletonRegister* GetSingletonRegiter();
};

template<typename T>
T* UBaseSingletonRegister::GetInstance()
{
	InitializeSingletonRegiter();

	const FName singletonKey = GetSingletonKey<T>();
	if (instance->registeredSingletonsMap.Contains(singletonKey))
	{
		return instance->registeredSingletonsMap[singletonKey];
	}
	else
	{
		T* createdInstance = NewObject<T>();
		instance->registeredSingletonsMap.Add(singletonKey, createdInstance);

		return createdInstance;
	}
}

template<typename T>
FName UBaseSingletonRegister::GetSingletonKey()
{
	return T::StaticClass()->GetName();
}
