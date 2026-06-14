// Fill out your copyright notice in the Description page of Project Settings.


#include "CalcurateFirstFractal.h"
#include "Math\RandomStream.h"

FCalcurateFirstFractal::FCalcurateFirstFractal()
{
}

FCalcurateFirstFractal::~FCalcurateFirstFractal()
{
}

void FCalcurateFirstFractal::ExecuteFractal(FFractalNode firstNode, int32 stepCount, int32 Seed, bool bFirstHorizontalSlice)
{
	FRandomStream rand(Seed);

	FFractalStep firstStep;
	firstStep.nodes.Add(firstNode);
	FractalAllSteps.Add(firstStep);
	bool bSliceHorizontal = bFirstHorizontalSlice;

	for (int32 step = 0; step < stepCount; step++)
	{

		FractalAllSteps.Add(FFractalStep());
		const FFractalStep& currentStep = FractalAllSteps[step];
		FFractalStep& nextStep = FractalAllSteps[step + 1];

		for (int32 nodeCount = 0; nodeCount < currentStep.nodes.Num(); nodeCount++)
		{

			AddSliceBox(rand, currentStep.nodes[nodeCount], nextStep, bSliceHorizontal);

		}
		bSliceHorizontal = !bSliceHorizontal;
	}
}

void FCalcurateFirstFractal::ExecuteFractalShrink(FFractalNode firstNode, int32 stepCount, int32 Seed, bool bFirstHorizontalSlice, float shrinkSize)
{
	FRandomStream rand(Seed);

	FFractalStep firstStep;
	firstStep.nodes.Add(firstNode);
	FractalAllSteps.Add(firstStep);
	bool bSliceHorizontal = bFirstHorizontalSlice;

	for (int32 step = 0; step < stepCount; step++)
	{

		FractalAllSteps.Add(FFractalStep());
		FFractalStep& currentStep = FractalAllSteps[step];
		FFractalStep& nextStep = FractalAllSteps[step + 1];

		for (int32 nodeCount = 0; nodeCount < currentStep.nodes.Num(); nodeCount++)
		{

			FFractalNode& node = currentStep.nodes[nodeCount];
			node.anchor += FVector2D(shrinkSize / 2, shrinkSize / 2);
			node.size -= FVector2D(shrinkSize / 2, shrinkSize / 2);
			if (node.size.X <= 0 || node.size.Y <= 0)
			{
				continue;
			}
			AddSliceBox(rand, node, nextStep, bSliceHorizontal);

		}
		bSliceHorizontal = !bSliceHorizontal;
	}
}

void FCalcurateFirstFractal::AddSliceBox(const FRandomStream& Seed ,const FFractalNode& inNode, FFractalStep& outStep, bool bSliceHorizontal)
{
	const FVector2D& parentNodeAnchor = inNode.anchor;
	const FVector2D& parentNodeSize = inNode.size;

	FFractalNode node1;
	FFractalNode node2;

	node1.anchor = parentNodeAnchor;

	if (bSliceHorizontal)
	{

		float slicePoint = Seed.FRandRange(0.f, parentNodeSize.Y);

		node1.size = FVector2D(parentNodeSize.X, slicePoint);
		node2.size = FVector2D(parentNodeSize.X, parentNodeSize.Y - slicePoint);

		node2.anchor = parentNodeAnchor + FVector2D(0.f, slicePoint);

	}
	else
	{

		float slicePoint = Seed.FRandRange(0.f, parentNodeSize.X);

		node1.size = FVector2D(slicePoint, parentNodeSize.Y);
		node2.size = FVector2D(parentNodeSize.X - slicePoint, parentNodeSize.Y);

		node2.anchor = parentNodeAnchor + FVector2D(slicePoint, 0.f);

	}

	outStep.nodes.Add(node1);
	outStep.nodes.Add(node2);

	return;
}
