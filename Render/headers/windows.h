// Copyright (C) 2015 Matheus SIlva MIT Licensed
// Include the shared header
#include "shared.h"
#define WINDOWS_H
#ifdef RENDER_EXPORTS
#define  RENDER_API __declspec(dllexport)
#else
#define RENDER_API __declspec(dllimport)
#endif
