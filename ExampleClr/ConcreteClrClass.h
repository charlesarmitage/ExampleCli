// ExampleClr.h

#pragma once
#include <msclr\marshal_cppstd.h>

using namespace System;

// A CLR file
namespace ExampleClr {

	public ref class ConcreteClrClass
	{
	public :
		String^ ReturningStrings();
		String^ ReturningStringFromNativeCode();

		int ReturnValueTypeFromClr();
		int ReturnValueTypeFromNative();

		void WriteStringToNative(String^ text);
	};
}
