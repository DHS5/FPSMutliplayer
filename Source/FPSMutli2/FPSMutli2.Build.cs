// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSMutli2 : ModuleRules
{
	public FPSMutli2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
