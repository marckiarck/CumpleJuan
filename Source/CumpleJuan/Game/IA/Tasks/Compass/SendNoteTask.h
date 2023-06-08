// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CumpleJuan/Core/Datatables/BaseDataTable.h"
#include "SendNoteTask.generated.h"


UCLASS()
class CUMPLEJUAN_API USendNoteTask : public UBTTaskNode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FName noteRow;

	UPROPERTY(EditAnywhere)
		FDatatbleDropdown noteDropdown;
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;
};
