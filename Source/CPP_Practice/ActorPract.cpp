// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_Practice.h"
#include "ActorPract.h"


// Sets default values
AActorPract::AActorPract()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorPract::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorPract::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

