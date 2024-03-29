// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <MotionControllerComponent.h>
#include "HandController.generated.h"

UCLASS()
class VRPAINTINGUI_API AHandController : public AActor
{
	GENERATED_BODY()
	
public:	
	AHandController();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	void SetHand(EControllerHand Hand) { MotionController->SetTrackingSource(Hand); }

private:
	UMotionControllerComponent* MotionController = nullptr;
};
