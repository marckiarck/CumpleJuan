// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EventSystem/Events/GC_Event.h"
#include "GC_BlueprintEvent.generated.h"


UCLASS(Blueprintable, BlueprintType)
class UGC_BlueprintEvent : public UGC_Event
{
	GENERATED_BODY()

protected:
	void OnEventStarted() override;
	void OnEventTick(float deltaSeconds) override;
	void OnEventFinish() override;

	UFUNCTION(BlueprintImplementableEvent, Category = Event, DisplayName = "OnEventStarted")
		void OnEventStartedBP();
	UFUNCTION(BlueprintNativeEvent, Category = Event, DisplayName = "OnEventTick")
		void OnEventTickBP();
	UFUNCTION(BlueprintImplementableEvent, Category = Event, DisplayName = "OnEventFinish")
		void OnEventFinishBP();

};
