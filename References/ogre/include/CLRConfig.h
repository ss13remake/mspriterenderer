#pragma once

#define LINK_TO_MOGRE 1

#if LINK_TO_MOGRE

  #if defined(_M_X64)

    #ifdef _DEBUG
    #pragma comment(lib, "../../../../bin/x64/Debug/mogre.lib")
    #else
    #pragma comment(lib, "../../../../bin/x64/Release/mogre.lib")
    #endif

  #else

    #ifdef _DEBUG
    #pragma comment(lib, "../../../../bin/x86/Debug/mogre.lib")
    #else
    #pragma comment(lib, "../../../../bin/x86/Release/mogre.lib")
    #endif

  #endif

#endif
