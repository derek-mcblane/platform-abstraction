#pragma once

#if defined(LINUX_OS)
    #include "platform-specific/linux/platform-implementation.h"
    using Platform = LinuxImpl;
#elif defined(APPLE_OS)
    #include "platform-specific/apple/platform-implementation.h"
    using Platform = AppleImpl;
#elif defined(WINDOWS_OS)
    #include "platform-specific/windows/platform-implementation.h"
    using Platform = WindowsImpl;
#else
    #error("Platform not implemented");
#endif

