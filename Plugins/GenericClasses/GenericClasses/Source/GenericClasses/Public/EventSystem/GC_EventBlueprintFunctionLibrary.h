// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EventSystem/GC_EventRegister.h"
#include "GC_EventBlueprintFunctionLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE(FOnFinish);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTest, FString, onTestString);

UCLASS()
class GENERICCLASSES_API UGC_EventBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "EventRegister", meta = (BlueprintInternalUseOnly = "true"))
		static void RegisterEvent(TSubclassOf<class UGC_Event> eventClass, FDataTableRowHandle eventSpawnHandle, const FOnFinish onEventFinish, float launchDelay = 0.f);

	UFUNCTION(BlueprintCallable, Category = "EventRegister", meta = (BlueprintInternalUseOnly = "true"))
		static void TestFunction(float value, int num, float& outValue, const FOnTest onTest);
};