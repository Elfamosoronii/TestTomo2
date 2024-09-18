// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test_Tomo_Roni : ModuleRules
{
	public Test_Tomo_Roni(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
