// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CumpleJuan/Core/Datatables/BaseDataTable.h"
#include "SendNoteTask.generated.h"

USTRUCT(BlueprintType)
struct CUMPLEJUAN_API FTestDropdown
{
	GENERATED_USTRUCT_BODY()

public:
	/** Pointer to table we want a row from */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DataTableRowHandle)
		TObjectPtr<const UDataTable>	DataTable;

	/** Name of row in the table that we want */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DataTableRowHandle)
		FName RowName;

	bool operator==(FDataTableRowHandle const& Other) const;
	bool operator!=(FDataTableRowHandle const& Other) const;
	void PostSerialize(const FArchive& Ar);
};

UCLASS()
class CUMPLEJUAN_API USendNoteTask : public UBTTaskNode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, DisplayName = "NoteRow")
		FDataTableRowHandle rowHandle;

	UPROPERTY(EditAnywhere)
		FTestDropdown testDropdown;

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;
};
