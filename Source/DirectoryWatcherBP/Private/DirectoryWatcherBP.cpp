// Copyright Epic Games, Inc. All Rights Reserved.

#include "DirectoryWatcherBP.h"
#include "efsw.h"

#define LOCTEXT_NAMESPACE "FDirectoryWatcherBPModule"

void FDirectoryWatcherBPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FDirectoryWatcherBPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

bool FDirectoryWatcherBPModule::WatchDirectory(FString Path)
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDirectoryWatcherBPModule, DirectoryWatcherBP)