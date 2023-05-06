// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuanAssetManager.h"
#include "AbilitySystemGlobals.h"

void UCumpleJuanAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
}