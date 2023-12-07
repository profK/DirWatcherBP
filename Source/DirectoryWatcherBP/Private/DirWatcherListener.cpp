// Fill out your copyright notice in the Description page of Project Settings.


#include "DirWatcherListener.h"

// Sets default values
ADirWatcherListener::ADirWatcherListener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ADirWatcherListener::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirWatcherListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ADirWatcherListener::handleFileAction(WatchID watchid, const std::string& dir, const std::string& filename,
	Action action, std::string oldFilename)
{
	std::string dirstr(dir);
	dirstr = dirstr.append("/").append(filename);
	const FString Path(dirstr.c_str());
	const FString OldPath(
			std::string(dir).append("/").append(oldFilename).c_str());
	switch ( action ) {
	case Actions::Add:
		RecieveActorOnFileAdded(Path);
		break;
	case Actions::Delete:
		RecieveActorOnFileRemoved(Path);
		break;
	case Actions::Modified:
		RecieveActorOnFileModified(Path,FDateTime());
		break;
	case Actions::Moved:
		
		RecieveActorOnFileMoved(OldPath,Path);
		break;
	default:
		std::cout << "Should never happen!" << std::endl;
	}
}



