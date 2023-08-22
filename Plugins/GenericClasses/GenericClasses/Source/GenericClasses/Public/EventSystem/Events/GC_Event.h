// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPooler/GC_ObjectPooler.h"
#include "GC_Event.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnEventStarts, UGC_Event*);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnEventFinish, UGC_Event*);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnEventTick, UGC_Event*, float);

//[TODO] el evento puede ser cancelado?? gestionarlo
//[TODO] se puede hacer una separación entre los eventos con event tick y sin event tick para liberar la tension del event register y simplimificar la cantidad de metodos de los blueprints
UCLASS(Abstract, BlueprintType)
class GENERICCLASSES_API UGC_Event : public UObject, public IGC_PooledObjectInterface
{
	GENERATED_BODY()

public:

	void LaunchEvent(float deltaSeconds);

	UFUNCTION(BlueprintCallable)
		void FinishEvent();

	FOnEventStarts& GetOnStartEventDelegate();
	FOnEventTick& GetOnEventTickDelegate();
	FOnEventFinish& GetOnFinishEventDelegate();

protected:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;
	void OnPooledObjectDestroyed() override;

	virtual void OnEventStarted();
	virtual void OnEventTick(float deltaSeconds);
	virtual void OnEventFinish();

private:

	bool eventLaunched = false;

	FOnEventStarts OnStartEventDelegate;
	FOnEventTick OnEventTickDelegate;
	FOnEventFinish OnFinishEventDelegate;

	void StartEvent();
	void EventTick(float deltaSeconds);
};
