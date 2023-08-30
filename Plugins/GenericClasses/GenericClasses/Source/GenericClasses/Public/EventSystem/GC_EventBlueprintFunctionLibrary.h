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
		static void RegisterEvent(FGC_EventCreationData eventCreationData, const FOnFinish onEventFinish, UObject* aditionalData = nullptr);

	UFUNCTION(BlueprintCallable, Category = "EventRegister", meta = (BlueprintInternalUseOnly = "true"))
		static void RegisterEventSequence(class UGC_EventSequenceDataAsset* sequenceData, const FOnFinish onEventSequenceFinish, UObject* aditionalData = nullptr);

	UFUNCTION(BlueprintCallable, Category = "EventRegister", meta = (BlueprintInternalUseOnly = "true"))
		static void TestFunction(float value, int num, float& outValue, const FOnTest onTest, struct FGC_DataTableRowHandle rowHandle);
};