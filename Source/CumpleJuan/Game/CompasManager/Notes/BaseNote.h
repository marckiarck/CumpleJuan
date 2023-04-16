// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseNote.generated.h"


UCLASS()
class CUMPLEJUAN_API UBaseNote : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	float unitCost = 1.f;

public:
	float GetUnitCost();
};
