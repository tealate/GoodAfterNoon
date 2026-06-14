// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GoodAfterNoon : ModuleRules
{
	public GoodAfterNoon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
