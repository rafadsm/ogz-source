#pragma once

#if _WIN64
#pragma comment(lib, "../sdk/bullet/lib/x64/BulletCollision.lib")
#pragma comment(lib, "../sdk/bullet/lib/x64/LinearMath.lib")
#elif _WIN32
#pragma comment(lib, "../sdk/bullet/lib/x86/BulletCollision.lib")
#pragma comment(lib, "../sdk/bullet/lib/x86/LinearMath.lib")
#endif
