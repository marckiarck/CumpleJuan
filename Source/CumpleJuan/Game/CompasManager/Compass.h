// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <CumpleJuan/Game/CompasManager/Notes/BaseNote.h>
#include "Compass.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompassTickDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoteRecievedDelegate, UBaseNote*, recievedNote);

UCLASS(BlueprintType)
class CUMPLEJUAN_API UCompassConfiguration : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Number Of Notes"))
		int numTicks = 4.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Time Unit"))
		int tickTime = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Time Unit Duration"))
		float tickfrequency = 1.f;

};

UCLASS()
class CUMPLEJUAN_API UCompass : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY()
		UWorld* compassWorld;

	UPROPERTY()
		int numTicks = 4.f;

	UPROPERTY()
		int tickTime = 1;

	UPROPERTY()
		float tickfrequency = 1.f;

	UPROPERTY()
		int tickIndex = 0;

	UPROPERTY()
		float tickPortionFilled = 0.f;

	UPROPERTY()
		FTimerHandle compassTickTimerHandle;

	FOnCompassTickDelegate OnCompassTickDelegate;
	FOnNoteRecievedDelegate OnNoteRecievedDelegate;

public:
	void ConfigureCompass(UCompassConfiguration* compassConfiguration);
	void InitialzeCompass(UWorld* contextWorld);
	void ShutDownCompass();

	void RecieveNote(UBaseNote* recievedNote);

	FOnCompassTickDelegate& GetOnCompassTick();
	FOnNoteRecievedDelegate& GetOnNoteRecievedDelegate();

	UFUNCTION()
		void CompassTick();
};
