// Copyright Epic Games, Inc. All Rights Reserved.

#include "DirectoryWatcherBPBPLibrary.h"
#include "DirectoryWatcherBP.h"

UDirectoryWatcherBPBPLibrary::UDirectoryWatcherBPBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UDirectoryWatcherBPBPLibrary::WatchDirectory(FString Path)
{
	return false;
}

