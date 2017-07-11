// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SkrymtPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SKRYMT_API ASkrymtPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	ASkrymtPlayerController();

	/** Update Function, Called Every Frame */
	UFUNCTION()
	virtual void Tick(float deltaSeconds) override;

	void StartSelection();
	void EndSelection();

protected:
	
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	

private:

	bool bIsSelecting;
	bool bCanMoveCamera;

	FVector2D StartingPositionMouseClick;
	
};