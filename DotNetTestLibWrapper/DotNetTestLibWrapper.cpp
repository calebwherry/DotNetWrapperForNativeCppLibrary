// DotNetTestLibWrapper.cpp

// Managed includes:
#include "DotNetTestLibWrapper.h"
#include <msclr\marshal_cppstd.h>

// Native includes:
#include "NativeTestLib.h"
#include <string>

using namespace System;
using namespace msclr::interop;
using namespace std;

// Wrapper namespace:
namespace DotNetTestLibWrapper
{

	String^ FreeFunctions::ReverseString(String^ str)
	{
		string nativeStr = marshal_as<std::string>(str);
		return gcnew String(NativeTestLib::ReverseString(nativeStr).c_str());
	}

}// DotNetTestLibWrapper namespace