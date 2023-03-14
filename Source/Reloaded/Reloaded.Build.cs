// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Reloaded : ModuleRules
{
	public Reloaded(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
