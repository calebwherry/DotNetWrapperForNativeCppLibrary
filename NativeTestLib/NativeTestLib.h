// NativeTestLib.h

#pragma once

#include <string>

#if defined(WIN32) || defined(_WIN32)
#define API __declspec(dllexport)
#else
#define API
#endif

namespace NativeTestLib
{

API std::string ReverseString(const std::string& str);

}