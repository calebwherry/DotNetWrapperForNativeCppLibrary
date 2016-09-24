// NativeTestLib.cpp

#include "NativeTestLib.h"

using namespace std;

namespace NativeTestLib
{

string ReverseString(const string& str)
{
	auto reversedStr = str;
	reverse(reversedStr.begin(), reversedStr.end());
	return reversedStr;
}

}