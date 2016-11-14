#pragma once
#include <msclr\marshal_cppstd.h>

using namespace System;

// A CLI file
namespace ExampleCli {

	public ref class ConcreteCliClass
	{
	public :
		String^ ReturningStrings();
		String^ ReturningStringFromNativeCode();

		int ReturnValueTypeFromClr();
		int ReturnValueTypeFromNative();

		void WriteStringToNative(String^ text);
	};
}
