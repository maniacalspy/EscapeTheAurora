// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EscapeTheAurora : ModuleRules
{
	public EscapeTheAurora(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "SlateCore", "Slate", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
