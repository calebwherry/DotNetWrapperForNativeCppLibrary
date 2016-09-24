// NativeTestLib.cpp

#include "NativeTestLib.h"

using namespace std;

// Native namespace:
namespace NativeTestLib
{

	string ReverseString(const string& str)
	{
		auto reversedStr = str;
		reverse(reversedStr.begin(), reversedStr.end());
		return reversedStr;
	}

} // NativeTestLib namespace