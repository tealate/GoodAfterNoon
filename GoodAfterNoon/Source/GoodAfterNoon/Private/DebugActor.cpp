// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugActor.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ADebugActor::ADebugActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADebugActor::BeginPlay()
{
	Super::BeginPlay();
	CalculateTown();
}

// Called every frame
void ADebugActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawTown();
}

void ADebugActor::DrawDebugBox(FVector2D Anchor, FVector2D Size, FLinearColor Color)
{
	FVector2D centerPoint = (Anchor + Size / 2) * 2;
	UKismetSystemLibrary::DrawDebugBox(GetWorld(), FVector(centerPoint.X, centerPoint.Y, 0.f), FVector(Size.X, Size.Y, 1.f), Color);
}

void ADebugActor::DrawTown()
{

	if (CalcFractal.FractalAllSteps.Num() == 0)
	{
		return;
	}

	const TArray<FFractalStep>& allStep = CalcFractal.FractalAllSteps;
	if (allStep.Num() == 0)
	{
		return;
	}
	if (drawStep < allStep.Num())
	{
		DrawTowers(allStep[drawStep]);
	}
	else
	{
		DrawTowers(allStep[allStep.Num() - 1]);
	}

}

void ADebugActor::CalculateTown()
{
	FFractalNode firstFractal(FVector2D(0.f, 0.f), FVector2D(10.f, 10.f));
	CalcFractal.ExecuteFractalShrink(firstFractal, 10, 0, false, Shrink);
}

void ADebugActor::DrawTowers(const FFractalStep& FractalTarget)
{
	const TArray<FFractalNode>& targetFractals = FractalTarget.nodes;
	FlushPersistentDebugLines(GetWorld());
	for (const FFractalNode& targetFractal : targetFractals)
	{
		DrawDebugBox(targetFractal.anchor * TownSize, targetFractal.size * TownSize, targetFractal.color);
	}
}

