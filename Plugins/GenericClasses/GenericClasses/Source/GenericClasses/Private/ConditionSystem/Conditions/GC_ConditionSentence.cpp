// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/ConditionSystem/Conditions/GC_ConditionSentence.h"

bool UGC_ConditionSentence::CheckCondition()
{
	bool conditionResult = RunConditionSentence();
	onConditionSentenceChecked.Broadcast(conditionResult);

	return conditionResult;
}

void UGC_ConditionSentence::SetConditionData(UObject* conditionDataContainer)
{

}

bool UGC_ConditionSentence::RunConditionSentence()
{
	return true;
}

FOnConditionSentenceChecked& UGC_ConditionSentence::GetOnConditionSentenceChecked()
{
	return onConditionSentenceChecked;
}
