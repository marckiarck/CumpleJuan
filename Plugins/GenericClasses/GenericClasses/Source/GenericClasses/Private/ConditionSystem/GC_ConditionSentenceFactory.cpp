// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/ConditionSystem/GC_ConditionSentenceFactory.h"
#include "GenericClasses/Public/GenericClassesMinimals.h"


UGC_ConditionSentence* GC_ConditionSentenceFactory::BuildConditionSentence(TSubclassOf<UGC_ConditionSentence> conditionSentenceClass, FDataTableRowHandle conditionsSpawnHandle /*= FDataTableRowHandle()*/)
{
	UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>();
	UGC_ConditionSentence* returnedConditionSentence = objectPooler->NewUObjectTemplated<UGC_ConditionSentence>(conditionSentenceClass, conditionsSpawnHandle);

	GC_CHECK(returnedConditionSentence == nullptr, TEXT("Builded condition sentence failed"));

	return returnedConditionSentence;
}

UGC_ConditionSentence* GC_ConditionSentenceFactory::BuildConditionSentenceWithData(const FGC_ConditionCreationData& conditionCreationData)
{
	return BuildConditionSentence(conditionCreationData.conditionSentenceClass, conditionCreationData.conditionsSpawnHandle);
}
