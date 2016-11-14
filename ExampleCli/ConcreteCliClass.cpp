// This is the main DLL file.

#include "stdafx.h"

#include "ConcreteCliClass.h"
#include "NativeClass.h"


namespace ExampleCli {

	String^ ConcreteCliClass::ReturningStrings() {
		return gcnew String(
"I return a string as a CLR reference type. gcnew is used create me as a \
reference type that can be managed and garbage collected");
	}

	String^ ConcreteCliClass::ReturningStringFromNativeCode() {
		native_classes::NativeClass nativeClass;

		return gcnew String(nativeClass.ReturnStringFromNativeCode().c_str()) 
			+ gcnew String(". We can initialize String^ with char*");
	}

	int ConcreteCliClass::ReturnValueTypeFromClr() {
		return 876552;
	}

	int ConcreteCliClass::ReturnValueTypeFromNative() {
		native_classes::NativeClass nativeClass;

		return nativeClass.ReturnInt();
	}

	void ConcreteCliClass::WriteStringToNative(String^ managedText) {
		native_classes::NativeClass nativeClass;

		// See: https://msdn.microsoft.com/en-us/library/bb384865.aspx
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managedText);
		return nativeClass.WriteToCout(unmanaged);
	}
}

