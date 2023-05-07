// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NoteAbilityData.generated.h"


UCLASS(BlueprintType, Blueprintable)
class CUMPLEJUAN_API UNoteAbilityData : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Transient)
	class ANoteActor* noteActor;
};
