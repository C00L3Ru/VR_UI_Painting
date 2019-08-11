// Fill out your copyright notice in the Description page of Project Settings.


#include "HandController.h"

// Sets default values
AHandController::AHandController()
{
	PrimaryActorTick.bCanEverTick = true;
	
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>(FName("MotionController"));
	MotionController->SetShowDeviceModel(true);
	SetRootComponent(MotionController);
}

void AHandController::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

