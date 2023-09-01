// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CumpleJuan/Core/Datatables/BaseDataTable.h"
#include "DataStructures/GC_DynamicDropdown.h"
#include "SendNoteTask.generated.h"

UCLASS(BlueprintType, editinlinenew, DefaultToInstanced)
class CUMPLEJUAN_API UTestDropdown : public UObject
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (GetOptions = "NameOptions"))
		FName Name;

	UPROPERTY(EditAnywhere)
		TArray<FString> NameOptions = { "Option1", "Option2", "Option3" };

	UFUNCTION()
		virtual TArray<FString> GetNameOptions() const;
};

UCLASS()
class CUMPLEJUAN_API USendNoteTask : public UBTTaskNode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, DisplayName = "NoteRow")
		FDataTableRowHandle rowHandle;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "TestDropdown", meta = (DisplayName = "Test Drop Down"))
		UGC_DynamicDropdown* testDropdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (GetOptions = "GetNameOptions"))
		FName Name;

	UFUNCTION(CallInEditor)
		TArray<FString> GetNameOptions() const
	{
		return { "Option1", "Option2", "Option3" };
	}

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;
};
