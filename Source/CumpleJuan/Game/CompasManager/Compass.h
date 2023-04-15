// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Compass.generated.h"


UCLASS(BlueprintType)
class CUMPLEJUAN_API UCompassConfiguration : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Number Of Notes"))
		int numTicks = 4.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Time Unit"))
		int tickTime = 1;
};

UCLASS()
class CUMPLEJUAN_API UCompass : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
		int numTicks = 4.f;

	UPROPERTY()
		int tickTime = 1;

public:
	void ConfigureCompass(UCompassConfiguration* compassConfiguration);

	void CompassTick();
};
