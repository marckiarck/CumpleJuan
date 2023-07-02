// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "GenericClasses/Public/ObjectPooler/GC_PooledObjectInterface.h"
#include "GC_EventRegister.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct GENERICCLASSES_API FGC_EventRegisterDataRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		float queueDeltaTime = -1.f;

};

UCLASS()
class GENERICCLASSES_API AGC_EventRegister : public AActor, public IGC_PooledObjectInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGC_EventRegister();

private:
	UPROPERTY()
		FTimerHandle queueTimerHandle;

	float queueDeltaTime = 0.17f;

public:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;
	void OnPooledObjectDestroyed() override;

private:
	UFUNCTION()
		void UpdateEventQueue();
};
