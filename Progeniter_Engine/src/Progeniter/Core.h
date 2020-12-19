#pragma once

#ifdef  PGR_PLATFORM_WINDOWS
	#ifdef PGR_BUILD_DLL
		#define PGR_API __declspec(dllexport)
	#else 
		#define PGR_API __declspec(dllimport)
	#endif // PGR_BUILD_DLL
#else
	#error Progeniter only supports Windows!
#endif // PGR_PLATFORM_WINDOWS
