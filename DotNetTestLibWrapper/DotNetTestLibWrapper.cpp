// DotNetTestLibWrapper.cpp

#include "DotNetTestLibWrapper.h"

// Native includes:
#include "NativeTestLib.h"
#include <string>

using namespace System;
using namespace std;

namespace DotNetTestLibWrapper
{

String^ ReverseString(const String^ str)
{
	string nativeStr;
	return gcnew String(NativeTestLib::ReverseString(nativeStr).c_str());
}

}