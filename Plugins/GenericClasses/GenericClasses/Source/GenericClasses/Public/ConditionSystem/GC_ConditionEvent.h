// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventSystem/Events/GC_Event.h"
#include "Conditions/GC_ConditionSentence.h"
#include "GC_ConditionEvent.generated.h"


UCLASS()
class UGC_ConditionEvent : public UGC_Event
{
	GENERATED_BODY()
	
private:
	UGC_ConditionSentence* conditionSentence;

public:
	virtual void OnEventTick(float deltaSeconds) override;

	void SetConditionSentence(TSubclassOf<UGC_ConditionSentence> conditionClass);

	FOnConditionSentenceChecked& GetOnConditionSentenceChecked();

	virtual void ProvideAditionalData(UObject* aditionalData) override;

protected:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;

};
