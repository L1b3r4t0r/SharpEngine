// Copyright (C) 2015 Matheus SIlva MIT Licensed
// Include the common headers
#if TARGET_LIN
#include "headers/linux.h"
#elif TARGET_WIN
#include "headers/windows.h"
#endif
#include <string>
#include <regex>
#include "../../vendor/v8/include/v8.h"
using namespace v8;
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
        Graphic_api(Api api);
    };
}
