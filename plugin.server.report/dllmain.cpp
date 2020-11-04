#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
	UNREFERENCED_PARAMETER(lpReserved);
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH: {
		//local::extern_global_hinstance = hModule;
	}break;
	case DLL_THREAD_ATTACH: {

	}break;
	case DLL_THREAD_DETACH: {

	}break;
	case DLL_PROCESS_DETACH: {
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	}break;
	}///switch (ul_reason_for_call)
	return TRUE;
}