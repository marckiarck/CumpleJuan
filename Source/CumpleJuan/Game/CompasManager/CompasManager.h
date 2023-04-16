// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CumpleJuan/Game/CompasManager/Compass.h"
#include "CompasManager.generated.h"


USTRUCT(BlueprintType)
struct CUMPLEJUAN_API FCompasssHandler
{
	friend class UCompassManager;
	GENERATED_BODY()

	FCompasssHandler();

	static int handlerIdSequence;

private:
	int handlerId;
	UCompass* storedCompass;

};

UCLASS()
class CUMPLEJUAN_API UCompassManager : public UObject
{
	GENERATED_BODY()

public:
	UCompassManager();

	static UCompassManager* instance;

	UFUNCTION(BlueprintPure)
	static UCompassManager* GetInstance(AActor* requestingActor = nullptr);

private:
	UPROPERTY()
	UWorld* contextWorld;

	UPROPERTY(Transient)
		TArray<UCompass*> tickingCompasses;

	UPROPERTY(Transient)
		TArray<UCompass*> unTickingCompasses;



public:
	UFUNCTION(BlueprintCallable)
	const FCompasssHandler RegisterCompass(UCompassConfiguration* compassConfiguration, bool isRegistered = true);
	UFUNCTION(BlueprintCallable)
	UCompass* GetCompass(FCompasssHandler compassHandler);

	UFUNCTION(BlueprintCallable)
	void StartCompassTick();
	UFUNCTION(BlueprintCallable)
	void ShutDownCompassTick();

};
