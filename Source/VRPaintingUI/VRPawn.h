// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VRPawn.generated.h"

UCLASS()
class VRPAINTINGUI_API AVRPawn : public APawn
{
	GENERATED_BODY()

public:
	AVRPawn();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* VRCamera = nullptr;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* VRRoot = nullptr;

public:	
};
