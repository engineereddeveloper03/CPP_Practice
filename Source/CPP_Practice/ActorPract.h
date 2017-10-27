// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ActorPract.generated.h"

UCLASS()
class CPP_PRACTICE_API AActorPract : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorPract();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	FString Name = "Brandon";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stats)
	int intelligence;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
