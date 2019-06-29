//
// GameFW
// (c) 2019 modeco80 under applicable license.
//

#if defined(_WIN32)
    #define WIN32_LEAN_AND_MEAN
	#include <windows.h>
    #include <stdlib.h>
    // Disable Microcrud's *amazing* idea to tread
    // on functions that are "unsafe" despite being used
    // without problems for years. I don't even get it anymore
    #define _CRT_SECURE_NO_WARNINGS 1
#elif defined(__EMSCRIPTEN__)
	#include <emscripten/emscripten.h>
#elif defined(__linux__)
	#define PLATFORM_LINUX
#endif
