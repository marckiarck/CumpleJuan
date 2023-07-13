// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPooler/GC_ObjectPooler.h"
#include "GC_Event.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventStarts, UGC_Event*, startedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventFinish, UGC_Event*, finishedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEventTick, UGC_Event*, startedEvent, float, deltaSeconds);

UCLASS(BlueprintType)
class UGC_Event : public UObject, public IGC_PooledObjectInterface
{
	GENERATED_BODY()

public:
	void LaunchEvent(float deltaSeconds);

	UFUNCTION(BlueprintCallable)
	void FinishEvent();

	FOnEventStarts& GetOnStartEventDelegate();
	FOnEventFinish& GetOnFinishEventDelegate();
	FOnEventTick& GetOnEventTickDelegate();

protected:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;
	void OnPooledObjectDestroyed() override;

	virtual void OnEventStarted();
	virtual void OnEventTick(float deltaSeconds);
	virtual void OnEventFinish();

private:

	bool eventLaunched = false;

	FOnEventStarts OnStartEventDelegate;
	FOnEventFinish OnFinishEventDelegate;
	FOnEventTick OnEventTickDelegate;

	void StartEvent();
	void EventTick(float deltaSeconds);
};
