// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GC_EditorComponent.h"
#include "GC_EditorComponentRow.generated.h"


USTRUCT()
struct GENERICCLASSESEDITOR_API FGC_EditorComponentRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, DisplayName="Editor Component Class")
	TSubclassOf<UGC_EditorComponent> editorComponentClass;

	UPROPERTY(EditAnywhere, DisplayName="Load Editor Component?")
	bool load = true;
};
