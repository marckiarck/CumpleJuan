// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "Internationalization/Text.h"
#include "K2Node_GC_RegisterEvent.generated.h"

#define LOCTEXT_NAMESPACE "GC_NodesNamespace"

#undef LOCTEXT_NAMESPACE

UCLASS()
class GENERICCLASSESEDITOR_API UK2Node_GC_RegisterEvent : public UK2Node
{
	GENERATED_BODY()

public:
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetMenuCategory() const override;

	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;

	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;

protected:
	virtual UFunction* GetNodeMainFuntion();
};