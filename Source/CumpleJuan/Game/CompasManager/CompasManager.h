// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CumpleJuan/Game/CompasManager/Compass.h"
#include "CompasManager.generated.h"


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
	UCompass* RegisterCompass(UCompassConfiguration* compassConfiguration, bool isRegistered = true);

	UFUNCTION(BlueprintCallable)
	void StartCompassTick();
	UFUNCTION(BlueprintCallable)
	void ShutDownCompassTick();

};
