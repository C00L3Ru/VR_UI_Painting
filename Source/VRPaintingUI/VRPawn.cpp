// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPawn.h"
#include <Components/SceneComponent.h>
#include <Camera/CameraComponent.h>

AVRPawn::AVRPawn()
{
	PrimaryActorTick.bCanEverTick = false;
	VRRoot = CreateDefaultSubobject<USceneComponent>(FName("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	VRCamera = CreateDefaultSubobject<UCameraComponent>(FName("VR CameraComponent"));
	VRCamera->SetupAttachment(VRRoot);
}

void AVRPawn::BeginPlay()
{
	Super::BeginPlay();
	
}


