// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/DataTable.h"
#include "BasePooledObjectInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBasePooledObjectInterface : public UInterface
{
	GENERATED_BODY()
};


class CUMPLEJUAN_API IBasePooledObjectInterface
{
	friend class UBaseObjectPooler;

	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
protected:
	virtual void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) {};
	virtual void OnPooledObjectDestroyed() {};

	UFUNCTION(BlueprintNativeEvent)
		void BeginPlay_PooledObject();
	UFUNCTION(BlueprintNativeEvent)
		void BeginDestroy_PooledObject();
};
