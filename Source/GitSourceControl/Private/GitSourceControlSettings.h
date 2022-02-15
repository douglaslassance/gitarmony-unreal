// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class FGitSourceControlSettings
{
public:
	/** Get the Git Binary Path */
	const FString GetBinaryPath() const;

	/** Get the Gitarmony Binary Path */
	const FString GetGitarmonyBinaryPath() const;
	
	/** Set the Git Binary Path */
	bool SetBinaryPath(const FString& InString);

	/** Set the Gitarmony Binary Path */
	bool SetGitarmonyBinaryPath(const FString& InString);
	
	/** Load settings from ini file */
	void LoadSettings();

	/** Save settings to ini file */
	void SaveSettings() const;

private:
	/** A critical section for settings access */
	mutable FCriticalSection CriticalSection;

	/** Git binary path */
	FString BinaryPath;

	/** Git Gitarmony binary path */
	FString GitarmonyBinaryPath;
};
