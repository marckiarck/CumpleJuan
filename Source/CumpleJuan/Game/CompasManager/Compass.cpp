// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Compass.h"

void UCompass::ConfigureCompass(UCompassConfiguration* compassConfiguration)
{
	numTicks = compassConfiguration->numTicks;
	tickTime = compassConfiguration->tickTime;
}

void UCompass::CompassTick()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.17f, FColor::Magenta, FString::Printf(TEXT("%d/%d"), numTicks, tickTime));
	}
}
