// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "efsw.hpp"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirWatcherListener.generated.h"

using namespace efsw;

UCLASS()
class ADirWatcherListener : public AActor, public efsw::FileWatchListener
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ADirWatcherListener();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "File Added", Keywords = "DirectoryWatcherBP listener change event"), Category = "DirectoryWatcherBP")
	void RecieveActorOnFileAdded(const FString& path);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "File Removed", Keywords = "DirectoryWatcherBP listener change event"), Category = "DirectoryWatcherBP")
	void RecieveActorOnFileRemoved(const FString& path);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "File Modified", Keywords = "DirectoryWatcherBP listener change event"), Category = "DirectoryWatcherBP")
	void RecieveActorOnFileModified(const FString& path, FDateTime&when);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "File Moved", Keywords = "DirectoryWatcherBP listener change event"), Category = "DirectoryWatcherBP")
	void RecieveActorOnFileMoved(const FString& oldPath,const FString& newPath);

	// Called by esfw
	virtual void handleFileAction( WatchID watchid, const std::string& dir,
								   const std::string& filename, Action action,
								   std::string oldFilename = "" ) override;
};
