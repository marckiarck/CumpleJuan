// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/DataStructures/GC_DynamicDropdown.h"

void UGC_DynamicDropdown::AssignDropDownOptions(TArray<FString>& newDropdownOptions)
{
	dropdownOptions = newDropdownOptions;
}
