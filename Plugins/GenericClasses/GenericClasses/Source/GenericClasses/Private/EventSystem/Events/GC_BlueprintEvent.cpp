// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/Events/GC_BlueprintEvent.h"

void UGC_BlueprintEvent::OnEventStarted()
{
	OnEventStartedBP();
}

void UGC_BlueprintEvent::OnEventTick(float deltaSeconds)
{
	OnEventTickBP();
}

void UGC_BlueprintEvent::OnEventFinish()
{
	OnEventFinishBP();
}

void UGC_BlueprintEvent::OnEventTickBP_Implementation()
{
	FinishEvent();
}
