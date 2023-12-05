// Some copyright should be here...

using UnrealBuildTool;

public class DirectoryWatcherBP : ModuleRules
{
	public DirectoryWatcherBP(ReadOnlyTargetRules Target) : base(Target)
	{
		string BPSourceDir = PluginDirectory+
		                     "/Source/DirectoryWatcherBP";
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
              
			}
		);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				BPSourceDir + "/ThirdParty/include/efsw"
			}
		);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
		);
		
		PublicAdditionalLibraries.AddRange(
			new string[] {
				BPSourceDir +
				"/ThirdParty/Windows/lib/efsw-static-release.lib"
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
		);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
}
