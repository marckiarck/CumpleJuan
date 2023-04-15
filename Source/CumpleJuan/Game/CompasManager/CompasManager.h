// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CumpleJuan/Game/CompasManager/Compass.h"
#include "CompasManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompassTickDelegate);

USTRUCT(BlueprintType)
struct CUMPLEJUAN_API FCompasssHandler
{
	GENERATED_BODY()

	FCompasssHandler();

	static int handlerIdSequence;

	int handlerId;
	UCompass* storedCompass;

};

UCLASS()
class CUMPLEJUAN_API UCompassManager : public UObject
{
	GENERATED_BODY()

public:
	UCompassManager();

private:
	static UCompassManager* instance;

	UFUNCTION(BlueprintPure)
	static UCompassManager* GetInstance(UWorld* world);

private:
	UPROPERTY()
	UWorld* contextWorld;

	UPROPERTY()
	FTimerHandle compassTickTimerHandle;

	UPROPERTY()
	float compassTickfrecuency = 1.f;

	UPROPERTY(Transient)
	TArray<UCompass*> registeredCompasses;

	UPROPERTY(Transient)
		TArray<UCompass*> tickingCompasses;

	UPROPERTY(Transient)
		TArray<UCompass*> unTickingCompasses;

	FOnCompassTickDelegate OnCompassTickDelegate;


public:
	const FCompasssHandler RegisterCompass(UCompassConfiguration* compassConfiguration, bool isRegistered = true);

	void StartCompassTick();
	void ShutDownCompassTick();

	FOnCompassTickDelegate& GetOnCompassTick();

private:
	UFUNCTION()
	void OnCompassTick();
};
