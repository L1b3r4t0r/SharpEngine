// Copyright (C) 2015 Matheus SIlva MIT Licensed
// Include the common headers
#if TARGET_LIN
#include "headers/linux.h"
#elif TARGET_WIN
#include "headers/windows.h"
#endif
#include <string>
#include <regex>
using namespace std;

namespace SharpEngine
{
    class Graphic_interface
    {
    public:
    };
    class Graphic_api
    {
    public:
        RENDER_API Graphic_api(api);
    };
}
