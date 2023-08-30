// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/ConditionSystem/GC_ConditionEvent.h"
#include "GenericClasses/Public/GenericClassesMinimals.h"
#include "DebugSystem/GC_DebugSystem.h"

void UGC_ConditionEvent::OnEventTick(float deltaSeconds)
{
	GC_CHECK_AND_DO(conditionSentence == nullptr, TEXT("Launched a ConditionEvent with a nullptr condition sentence"), {
		FinishEvent();
		return;
		})

	if (conditionSentence->CheckCondition())
	{
		FinishEvent();
	}
	
}

void UGC_ConditionEvent::SetConditionSentence(TSubclassOf<UGC_ConditionSentence> conditionClass)
{
	UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>();
	conditionSentence = objectPooler->NewUObjectTemplated<UGC_ConditionSentence>(conditionClass);
}

FOnConditionSentenceChecked& UGC_ConditionEvent::GetOnConditionSentenceChecked()
{
	return conditionSentence->GetOnConditionSentenceChecked();
}

void UGC_ConditionEvent::ProvideAditionalData(UObject* aditionalData)
{
	GC_CHECK_AND_DO(conditionSentence == nullptr, TEXT("Codition event is trying to provide aditional data to a nullptr Condition Sentence"), {
		return;
		});

	conditionSentence->SetConditionData(aditionalData);
}

void UGC_ConditionEvent::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	Super::OnPooledObjectCreated(creationDataHandle);

	eventTickEnabled = true;
}
