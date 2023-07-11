// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GenericClasses/Public/ObjectPooler/GC_PooledObjectInterface.h"
#include "GC_EventQueue.h"
#include "Events/GC_Event.h"
#include "GC_EventRegister.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct GENERICCLASSES_API FGC_EventRegisterDataRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		float queueDeltaTime = -1.f;

};

UCLASS()
class GENERICCLASSES_API UGC_EventRegister : public UObject, public IGC_PooledObjectInterface
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

	float queueDeltaTime = 0.17f;

public:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;
	void OnPooledObjectDestroyed() override;

private:
	UFUNCTION()
		void UpdateEventQueue();

	void InitializeEventRegister();
	void ShutDownEventRegister();

	UFUNCTION()
	void OnWorldDestroyed(UWorld* destroyedWorld);

	UFUNCTION()
	void OnWorldAdded(UWorld* addedWorld);
};
