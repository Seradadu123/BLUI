using UnrealBuildTool;
using System.IO;
using System;

public class BluDebugger : ModuleRules
{
	public BluDebugger(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(
			new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
			"UMG",
            "EditorStyle"
		});
	}
}
