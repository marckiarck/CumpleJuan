// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericClasses/Public/EventSystem/Events/GC_Event.h"
#include "SingletonRegister/GC_SingletonRegister.h"
#include "EventSystem/GC_EventRegister.h"

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

void UGC_Event::ProvideAditionalData(UObject* aditionalData)
{

}

void UGC_Event::SetEventDuration(float newEventDuration)
{
	eventDuration = newEventDuration;
}

void UGC_Event::LaunchEvent(float deltaSeconds)
{
	if (eventLaunched == false)
	{
		StartEvent();
	}

	if (eventTickEnabled)
	{
		EventTick(deltaSeconds);

		eventLifeTime += deltaSeconds;
		if (eventDuration > 0.f && eventLifeTime >= eventDuration)
		{
			OnTimeOutEventDelegate.Broadcast(this);
			FinishEvent();
		}
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

FOnEventFinish& UGC_Event::GetOnTimeOutEventDelegate()
{
	return OnTimeOutEventDelegate;
}

FOnEventTick& UGC_Event::GetOnEventTickDelegate()
{
	return OnEventTickDelegate;
}

bool UGC_Event::GetEventTickEnabled()
{
	return eventTickEnabled;
}

void UGC_Event::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{

}

void UGC_Event::OnPooledObjectDestroyed()
{
	OnStartEventDelegate.Clear();
	OnFinishEventDelegate.Clear();
	OnEventTickDelegate.Clear();
}

void UGC_Event::OnEventStarted()
{
	UE_LOG(LogTemp, Warning, TEXT("This is the OnEventStarted method of the clase base GC_Event. You should override it"))
}

void UGC_Event::OnEventTick(float deltaSeconds)
{
	UE_LOG(LogTemp, Warning, TEXT("This is the OnEventTick method of the clase base GC_Event. You should override it"));
}

void UGC_Event::OnEventFinish()
{
	UE_LOG(LogTemp, Warning, TEXT("This is the OnEventFinish method of the clase base GC_Event. You should override it"))
}

void UGC_Event::OnEventTimeOut()
{
	UE_LOG(LogTemp, Warning, TEXT("This is the OnEventFinish method of the clase base GC_Event. You should override it"))
}

