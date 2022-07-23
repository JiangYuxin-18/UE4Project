// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class test01 : ModuleRules
{
	public test01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
