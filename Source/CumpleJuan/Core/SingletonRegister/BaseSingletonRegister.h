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
	static T* GetInstance();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Singleton, meta=(DeterminesOutputType = "objectClass", DynamicOutputParam = "outObject"))
	static void GetInstance(TSubclassOf<UObject> objectClass, UObject*& outObject);

private:
	template<typename T>
	static FName GetSingletonKey();

	static UBaseSingletonRegister* GetSingletonRegiter();
};

template<typename T>
T* UBaseSingletonRegister::GetInstance()
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
FName UBaseSingletonRegister::GetSingletonKey()
{
	return FName(T::StaticClass()->GetName());
}
