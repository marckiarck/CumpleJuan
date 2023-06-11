// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "CumpleJuan/Core/ObjectPool/BasePooledObjectInterface.h"
#include "WaveActor.generated.h"

#define MATERIAL_COLOR_PARAMETER "ColorParam"

USTRUCT(BlueprintType, Blueprintable)
struct CUMPLEJUAN_API FWaveActorDataRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		UStaticMesh* waveMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = Material)
		UMaterialInterface* waveMaterial = nullptr;
};

UCLASS()
class CUMPLEJUAN_API AWaveActor : public AActor, public IBasePooledObjectInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* waveMesh;

	UPROPERTY(EditAnywhere)
		UMaterialInstanceDynamic* waveMaterial;

public:
	// Sets default values for this actor's properties
	AWaveActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;

};
