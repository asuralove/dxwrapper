#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#undef LoadLibrary

namespace Utils
{
	void Shell(const char*);
	void DisableHighDPIScaling();
	void SetProcessAffinity();
	void SetAppCompat();
	void HookExceptionHandler();
	void UnHookExceptionHandler();
	void AddHandleToVector(HMODULE dll, const char *name);
	HMODULE LoadLibrary(const char *dllname, bool EnableLogging = true);
	void LoadCustomDll();
	void LoadPlugins();
	void UnloadAllDlls();

	namespace WriteMemory
	{
		void WriteMemory();
		void StopThread();
	}

	namespace Fullscreen
	{
		void StartThread();
		bool IsThreadRunning();
		void StopThread();
		void CheckCurrentScreenRes();
		void ResetScreen();
	}
}

#define LoadLibrary Utils::LoadLibrary
