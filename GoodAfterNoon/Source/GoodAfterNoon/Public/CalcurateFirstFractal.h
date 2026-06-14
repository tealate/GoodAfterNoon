// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CalcurateFirstFractal.generated.h"

USTRUCT()
struct FFractalNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FVector2D anchor;
	UPROPERTY(EditAnywhere)
	FVector2D size;
	UPROPERTY(EditAnywhere)
	FLinearColor color;

	FFractalNode()
		: anchor(FVector2D::ZeroVector)
		, size(FVector2D::ZeroVector)
		, color(FLinearColor::Red)
	{
	}

	FFractalNode(const FVector2D& InAnchor, const FVector2D& InSize)
		: anchor(InAnchor)
		, size(InSize)
		, color(FLinearColor::Red)
	{
	}
};

USTRUCT()
struct FFractalStep
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TArray<FFractalNode> nodes;
};

USTRUCT()
struct FirstFractalParam
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	int32 StepCount;

	UPROPERTY(EditAnywhere)
	int32 Seed;

	bool bFirstHorizontalSlice = false;
};

USTRUCT()
struct GOODAFTERNOON_API FCalcurateFirstFractal
{
	GENERATED_BODY()
public:
	FCalcurateFirstFractal();
	~FCalcurateFirstFractal();

	void ExecuteFractal(FFractalNode firstNode, int32 stepCount = 10, int32 Seed = 0, bool bFirstHorizontalSlice = false);

	void ExecuteFractalShrink(FFractalNode firstNode, int32 stepCount = 10, int32 Seed = 0, bool bFirstHorizontalSlice = false, float shrinkSize = 0);

	UPROPERTY(EditAnywhere)
	TArray<FFractalStep> FractalAllSteps;

private:

	void AddSliceBox(const FRandomStream& Seed, const FFractalNode& inNode, FFractalStep& outStep, bool bSliceHorizontal);
};
