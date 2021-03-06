// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.


/*=============================================================================================
	AndroidPlatformStackWalk.h: Android platform stack walk functions
==============================================================================================*/

#pragma once
#include "GenericPlatform/GenericPlatformStackWalk.h"

/**
* Android platform stack walking
*/
struct CORE_API FAndroidPlatformStackWalk : public FGenericPlatformStackWalk
{
	typedef FGenericPlatformStackWalk Parent;

	static void ProgramCounterToSymbolInfo(uint64 ProgramCounter, FProgramCounterSymbolInfo& out_SymbolInfo);
	static uint32 CaptureStackBackTrace(uint64* BackTrace, uint32 MaxDepth, void* Context = nullptr);
};

typedef FAndroidPlatformStackWalk FPlatformStackWalk;
