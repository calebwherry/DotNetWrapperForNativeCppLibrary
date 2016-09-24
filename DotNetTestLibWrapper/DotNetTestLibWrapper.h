// DotNetTestLibWrapper.h

#pragma once

// Wrapper namespace:
namespace DotNetTestLibWrapper
{

	// No support for top-level free functions in .NET so we add them as 
	// static functions to a class.
	public ref class FreeFunctions
	{
	public:
		static System::String^ ReverseString(System::String^ str);
	private:
		FreeFunctions() {}
	};

} // DotNetTestLibWrapper namespace