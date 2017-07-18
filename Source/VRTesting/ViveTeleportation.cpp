// Fill out your copyright notice in the Description page of Project Settings.

#include "VRTesting.h"
#include "ViveTeleportation.h"


// Sets default values
AViveTeleportation::AViveTeleportation()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AViveTeleportation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AViveTeleportation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AViveTeleportation::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

