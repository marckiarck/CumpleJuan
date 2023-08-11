// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GC_EventRegister.h"
#include "GC_EventSequence.generated.h"

UCLASS()
class GENERICCLASSES_API UGC_EventSequenceDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, DisplayName = "Events Array")
		TArray<FGC_EventCreationData> eventCreationDataArray;
};

//Event sequence en verdad puede ser un evento que lance otros. O no tiene por que :D
UCLASS()
class UGC_EventSequence : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY(Transient)
		TArray<FGC_EventCreationData> eventCreationDataArray;

	int currentEvent = 0;

public:
	void ConfigureEventSequence(UGC_EventSequenceDataAsset* sequenceData);

private:
	void RegisterSequenceEvent();

	UFUNCTION()
	void OnSequenceEventFinish(UGC_Event* finishedEvent);

};
