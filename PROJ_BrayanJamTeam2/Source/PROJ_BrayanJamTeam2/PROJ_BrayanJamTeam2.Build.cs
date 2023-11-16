// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PROJ_BrayanJamTeam2 : ModuleRules
{
	public PROJ_BrayanJamTeam2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "OnlineSubsystem" });
	}
}
