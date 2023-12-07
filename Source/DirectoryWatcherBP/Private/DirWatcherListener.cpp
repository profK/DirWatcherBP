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


void ADirWatcherListener::handleFileAction(efsw::WatchID watchid, const std::string& dir, const std::string& filename,
	efsw::Action action, std::string oldFilename)
{
	
	switch ( action ) {
	case efsw::Actions::Add:
		std::cout << "DIR (" << dir << ") FILE (" << filename << ") has event Added"
				  << std::endl;
		break;
	case efsw::Actions::Delete:
		std::cout << "DIR (" << dir << ") FILE (" << filename << ") has event Delete"
				  << std::endl;
		break;
	case efsw::Actions::Modified:
		std::cout << "DIR (" << dir << ") FILE (" << filename << ") has event Modified"
				  << std::endl;
		break;
	case efsw::Actions::Moved:
		std::cout << "DIR (" << dir << ") FILE (" << filename << ") has event Moved from ("
				  << oldFilename << ")" << std::endl;
		break;
	default:
		std::cout << "Should never happen!" << std::endl;
	}
}



