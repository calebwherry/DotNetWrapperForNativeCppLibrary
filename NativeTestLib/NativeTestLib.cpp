// NativeTestLib.cpp

#include "NativeTestLib.h"

using namespace std;

namespace NativeTestLib
{

string ReverseString(const string& str)
{
	string reversedStr;
	auto strSize = str.size();
	reversedStr.resize(strSize);
	
	for (size_t i=0; i < strSize; ++i)
	{
		reversedStr[i] = str[strSize - 1 - i];
	}
	
	return reversedStr;
}

}