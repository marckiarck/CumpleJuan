// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BaseDataTable.generated.h"

USTRUCT(BlueprintType)
struct CUMPLEJUAN_API FDatatbleDropdown
{
	GENERATED_USTRUCT_BODY()

public:
	FDatatbleDropdown();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= DatatableRowHandle)
		TArray<FString> rows = {"None"};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= DatatableRowHandle)
	FName rowName;

	bool operator==(FDatatbleDropdown const& Other) const;
	bool operator!=(FDatatbleDropdown const& Other) const;
};

UCLASS()
class CUMPLEJUAN_API UBaseDataTable : public UDataTable
{
	GENERATED_BODY()

};
