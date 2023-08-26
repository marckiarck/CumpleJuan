// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventSystem/Events/GC_Event.h"
#include "AddNoteToCompassEvent.generated.h"


UCLASS(BlueprintType, Blueprintable)
class CUMPLEJUAN_API UAddNoteToCompassEvent : public UGC_Event
{
	GENERATED_BODY()

private:
	class UCompassComponent* compassComponent = nullptr;
	FName noteRow;
	
public:
	void ProvideAditionalData(UObject* aditionalData) override;

protected:
	void OnEventStarted() override;

	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;

};
