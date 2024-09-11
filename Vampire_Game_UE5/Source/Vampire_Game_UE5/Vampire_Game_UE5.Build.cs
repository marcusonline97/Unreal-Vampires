// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Vampire_Game_UE5 : ModuleRules
{
	public Vampire_Game_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
