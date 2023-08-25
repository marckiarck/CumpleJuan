// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#if WITH_GAMEPLAY_DEBUGGER

#include "CoreMinimal.h"
#include "GameplayDebuggerCategory.h"


class CUMPLEJUAN_API FPlayerAttriutesDebugCategory : public FGameplayDebuggerCategory
{
	
public:
	FPlayerAttriutesDebugCategory();

public:


protected:
	struct FAbilitySys
	{
		FString actorName = TEXT("None");
		FString maxHealth = TEXT("None");
		FString health = TEXT("None");
		FString damage = TEXT("None");
		void Serialize(FArchive& Ar);
	} DataPack;

private:


public:
	void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
	void DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext) override;

	static TSharedRef<FGameplayDebuggerCategory> MakeInstance();


};

#endif // WITH_GAMEPLAY_DEBUGGER