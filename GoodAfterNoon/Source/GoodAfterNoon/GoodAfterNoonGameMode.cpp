// Copyright Epic Games, Inc. All Rights Reserved.

#include "GoodAfterNoonGameMode.h"
#include "GoodAfterNoonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGoodAfterNoonGameMode::AGoodAfterNoonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
