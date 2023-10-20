// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GC_ConditionSentence.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct GENERICCLASSES_API FGC_ConditionSentenceRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnConditionSentenceChecked, bool);

UCLASS(Abstract, BlueprintType)
class GENERICCLASSES_API UGC_ConditionSentence : public UObject
{
	GENERATED_BODY()
	

private:
	FOnConditionSentenceChecked onConditionSentenceChecked;

public:
	bool CheckCondition();

	virtual void SetConditionData(UObject* conditionDataContainer);

	FOnConditionSentenceChecked& GetOnConditionSentenceChecked();

protected:
	virtual bool RunConditionSentence();
};
