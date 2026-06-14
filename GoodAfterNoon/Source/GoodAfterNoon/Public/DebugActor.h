// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CalcurateFirstFractal.h"
#include "DebugActor.generated.h"

UCLASS()
class GOODAFTERNOON_API ADebugActor : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, Category = "CalcurateFirstFractal")
	float TownSize;

	UPROPERTY(EditAnywhere, Category = "CalcurateFirstFractal")
	float Seed;

	UPROPERTY(EditAnywhere, Category = "CalcurateFirstFractal")
	float Shrink;

	UPROPERTY(EditAnywhere, Category = "CalcurateFirstFractal")
	int32 drawStep;

	// Sets default values for this actor's properties
	ADebugActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DrawDebugBox(FVector2D Anchor, FVector2D Size, FLinearColor Color);

	UFUNCTION(CallInEditor, Category = "CalcurateFirstFractal")
	void DrawTown();

private:
	UPROPERTY(EditAnywhere, Category = "CalcurateFirstFractal")
	FCalcurateFirstFractal CalcFractal;
	void CalculateTown();
	void DrawTowers(const FFractalStep& FractalTarget);

};
