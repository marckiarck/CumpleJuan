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
		FString waveType = TEXT("None");

	UPROPERTY(EditAnywhere, Category = Mesh)
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
		FString waveType = TEXT("None");

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* waveMesh;

	UPROPERTY(EditAnywhere)
		UMaterialInstanceDynamic* waveMaterial;

	UPROPERTY(Transient, BlueprintSetter = "SetIgnoredAtorsActor")
		TArray<AActor*> ignoredActors;

public:
	// Sets default values for this actor's properties
	AWaveActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, BlueprintSetter)
		void SetIgnoredAtorsActor(TArray<AActor*> newIgnoredActors);

	virtual void OnPooledObjectCreated(FDataTableRowHandle creationDataHandle) override;
	virtual void OnPooledObjectDestroyed() override;

protected:
	UFUNCTION()
		void OnWaveActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintImplementableEvent)
		void OnSameWaveCollision(AWaveActor* collidedWave);

	UFUNCTION(BlueprintImplementableEvent)
		void OnDiferentWaveCollision(AWaveActor* collidedWave);

	UFUNCTION(BlueprintImplementableEvent)
		void OnNotWaveCollision(AActor* collidedActor);

};
