// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Sound/SoundCue.h"
#include "BaseNote.generated.h"

USTRUCT(BlueprintType)
struct CUMPLEJUAN_API FNoteDataRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly , meta = (DisplayName = "Note Sound"))
		USoundCue* sound = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float unitCost = 1.f;
};

UCLASS()
class CUMPLEJUAN_API UBaseNote : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
		float unitCost = 1.f;

	UPROPERTY()
		USoundCue* noteSound = nullptr;

public:
	void ConfigureNote(FNoteDataRow* noteData);

	float GetUnitCost();
	USoundCue* GetNoteSound();
};
