// Fill out your copyright notice in the Description page of Project Settings.


#include "CumpleJuan/Game/CompasManager/Wave/WaveActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWaveActor::AWaveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	waveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wave Mesh"));
}

// Called when the game starts or when spawned
void AWaveActor::BeginPlay()
{
	Super::BeginPlay();
}

void AWaveActor::SetIgnoredAtorsActor(TArray<AActor*> newIgnoredActors)
{
	ignoredActors = newIgnoredActors;
}

void AWaveActor::OnPooledObjectCreated(FDataTableRowHandle creationDataHandle)
{
	FString ContextString = TEXT("Data table context");
	FWaveActorDataRow* waveRow = creationDataHandle.DataTable->FindRow<FWaveActorDataRow>(creationDataHandle.RowName, ContextString, true);
	if (waveRow)
	{
		waveMesh->SetStaticMesh(waveRow->waveMesh);
		if (waveRow->waveMaterial)
		{
			waveMaterial = UMaterialInstanceDynamic::Create(waveRow->waveMaterial, this);
			waveMesh->SetMaterial(0, waveMaterial);
		}

		waveType = waveRow->waveType;

	}

	if (waveMesh)
	{
		waveMesh->OnComponentBeginOverlap.AddDynamic(this, &AWaveActor::OnWaveActorOverlap);
	}
}

void AWaveActor::OnPooledObjectDestroyed()
{
	if (waveMesh)
	{
		waveMesh->OnComponentBeginOverlap.RemoveDynamic(this, &AWaveActor::OnWaveActorOverlap);
	}

	ignoredActors.Empty();
}

void AWaveActor::OnWaveActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (AWaveActor* overlapedWave = Cast<AWaveActor>(OtherActor))
	{
		if (overlapedWave->waveType == this->waveType)
		{
			OnSameWaveCollision(overlapedWave);
		}
		else
		{
			OnDiferentWaveCollision(overlapedWave);
		}
	}
	else
	{
		if (ignoredActors.Contains(OtherActor))
		{
			return;
		}

		OnNotWaveCollision(OtherActor);
	}
}

