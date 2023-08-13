// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GC_EventQueue.h"
#include "Events/GC_Event.h"
#include "SingletonRegister/GC_Singleton.h"
#include "GC_EventRegister.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct GENERICCLASSES_API FGC_EventRegisterDataRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		float queueDeltaTime = -1.f;

};

USTRUCT(BlueprintType, Blueprintable)
struct GENERICCLASSES_API FGC_EventCreationData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, DisplayName = "Event")
		TSubclassOf<UGC_Event> eventClass;

	UPROPERTY(EditAnywhere)
		float launchDelay = 0.f;

	UPROPERTY(EditAnywhere, DisplayName = "Event Creation Parameters")
	FDataTableRowHandle eventSpawnHandle;

};

UCLASS()
class GENERICCLASSES_API UGC_EventRegister : public UObject, public IGC_Singleton
{
	GENERATED_BODY()

public:

private:
	UPROPERTY()
		FTimerHandle queueTimerHandle;

	UPROPERTY(Transient)
		UWorld* timerWorld = nullptr;

	FDelegateHandle OnWorldAddedDelegateHandle;
	FDelegateHandle OnWorldDestroyedDelegateHandle;

	TGC_EventQueue<UGC_Event> eventQueue;

	UPROPERTY(Transient)
	TArray<UGC_Event*> launchedEvents;

	float queueDeltaTime = 0.17f;

public:

	UFUNCTION(BlueprintCallable, Category="EventRegister")
		UGC_Event* RegisterEvent(TSubclassOf<UGC_Event> eventClass, FDataTableRowHandle eventSpawnHandle, float launchDelay = 0.f);
	UFUNCTION(BlueprintCallable, Category = "EventRegister")
		void RegisterEventSequence(UGC_EventSequenceDataAsset* sequenceData);

	TArray<const UGC_Event*> GetLaunchedEvents();
	TArray<const UGC_Event*> GetQueuedEvents();

	virtual void OnInstanceCreated_Implementation(FDataTableRowHandle singletonDataHandle) override;
	virtual void OnResetInstance_Implementation(FDataTableRowHandle singletonDataHandle) override;

private:
	UFUNCTION()
		void UpdateEventQueue();

	void InitializeEventRegister();
	void ShutDownEventRegister();

	UFUNCTION()
	void OnWorldDestroyed(UWorld* destroyedWorld);

	UFUNCTION()
	void OnWorldAdded(UWorld* addedWorld);

	void BindToEventsOnFinish(TArray<UGC_Event*> eventsArray);

	UFUNCTION()
	void OnEventFinish(UGC_Event* finishedEvent);

	void PrintDebug();
};
