// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/Events/GC_Event.h"
#include "SingletonRegister/GC_SingletonRegister.h"

void UGC_Event::StartEvent()
{
	eventLaunched = true;
	OnEventStarted();
	OnStartEventDelegate.Broadcast(this);
}

void UGC_Event::FinishEvent()
{
	OnEventFinish();
	OnFinishEventDelegate.Broadcast(this);
	UGC_ObjectPooler* objectPooler = UGC_SingletonRegister::GetInstance<UGC_ObjectPooler>();
	objectPooler->DestroyUObject<UGC_Event>(this);
}

void UGC_Event::EventTick(float deltaSeconds)
{
	eventLaunched = false;
	OnEventTick(deltaSeconds);
	OnEventTickDelegate.Broadcast(this, deltaSeconds);
}

void UGC_Event::LaunchEvent(float deltaSeconds)
{
	if (eventLaunched == false)
	{
		StartEvent();
		EventTick(deltaSeconds);
	}
	else
	{
		EventTick(deltaSeconds);
	}
}

FOnEventStarts& UGC_Event::GetOnStartEventDelegate()
{
	return OnStartEventDelegate;
}

FOnEventFinish& UGC_Event::GetOnFinishEventDelegate()
{
	return OnFinishEventDelegate;
}

FOnEventTick& UGC_Event::GetOnEventTickDelegate()
{
	return OnEventTickDelegate;
}

void UGC_Event::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	
}

void UGC_Event::OnPooledObjectDestroyed()
{
	FinishEvent();
	OnStartEventDelegate.Clear();
	OnFinishEventDelegate.Clear();
	OnEventTickDelegate.Clear();
}

void UGC_Event::OnEventStarted()
{

}

void UGC_Event::OnEventTick(float deltaSeconds)
{

}

void UGC_Event::OnEventFinish()
{

}

