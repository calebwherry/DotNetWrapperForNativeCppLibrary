// DotNetTestLibWrapper.h

#pragma once

namespace DotNetTestLibWrapper 
{

// No support for top-level free functions in .NET so we have to add them as 
// static functions to a class.
public ref class FreeFunctions
{
public:
	static System::String^ ReverseString(System::String^ str);
private:
	FreeFunctions() {}
};

}
