#pragma once

#ifdef EG_PLATFORM_WINDOWS
	#ifdef EG_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
 // EG_BUILD_DLL

#endif