// DotNetTestLibWrapper.cpp

// Managed includes:
#include "DotNetTestLibWrapper.h"
#include <msclr\marshal_cppstd.h>

// Native includes:
#include "NativeTestLib.h"
#include <string>

using namespace System;
using namespace System::Collections::Concurrent;
using namespace msclr::interop;
using namespace std;

////////////////////////////////////
// StackOverflow question - Start //
////////////////////////////////////

// (1) & (2) Both do not compile:
// Reason: "a variable with a static storage duration cannot have a handle or tracking reference type"
//static ConcurrentDictionary<String^, String^>^ GlobalData1 = gcnew ConcurrentDictionary<String^, String^>();
//static auto^ GlobalData2 = gcnew ConcurrentDictionary<String^, String^>();

// (3) Does compile and link. But causes aruntime unhandled exception:
// Reason: "Unhandled Exception: System.IO.FileLoadException: Could not load file or assembly 'DotNetTestLibWrapper, Version=1.0.6111.33189, Culture=neutral, PublicKeyToken=null' or one of its dependencies. Could not find or load a type. (Exception from HRESULT: 0x80131522) ---> System.TypeLoadException: Type '<Module>' from assembly 'DotNetTestLibWrapper, Version=1.0.6111.33189, Culture=neutral, PublicKeyToken=null' has a field of an illegal type.
//          -- - End of inner exception stack trace-- -
//          at CsharpTestApp.Program.Main(String[] args)"
static auto GlobalData3 = gcnew ConcurrentDictionary<String^, String^>();

// (4) Correct way to do it:
ref struct GlobalData
{
	static ConcurrentDictionary<String^, String^>^ GlobalData4 = gcnew ConcurrentDictionary<String^, String^>();
};

//////////////////////////////////
// StackOverflow question - End //
//////////////////////////////////

// Wrapper namespace:
namespace DotNetTestLibWrapper
{

	String^ FreeFunctions::ReverseString(String^ str)
	{
		string nativeStr = marshal_as<std::string>(str);
		return gcnew String(NativeTestLib::ReverseString(nativeStr).c_str());
	}

}// DotNetTestLibWrapper namespace