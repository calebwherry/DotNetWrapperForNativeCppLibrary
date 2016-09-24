// NativeTestLib.h

#pragma once

#include <string>

// API defines per platform:
#if defined(WIN32) || defined(_WIN32)
#define API __declspec(dllexport)
#else
#define API
#endif

// Native namespace:
namespace NativeTestLib
{

	API std::string ReverseString(const std::string& str);

} // NativeTestLib namespace