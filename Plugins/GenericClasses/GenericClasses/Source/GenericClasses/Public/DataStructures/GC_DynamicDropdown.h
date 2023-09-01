// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GC_DynamicDropdown.generated.h"


UCLASS(BlueprintType, editinlinenew, DefaultToInstanced)
class GENERICCLASSES_API UGC_DynamicDropdown : public UObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (GetOptions = "NameOptions"))
		FName selectedOption;

protected:

	UPROPERTY(Transient)
		TArray<FString> dropdownOptions;

	UFUNCTION()
		virtual void AssignDropDownOptions(TArray<FString>& newDropdownOptions);
};
