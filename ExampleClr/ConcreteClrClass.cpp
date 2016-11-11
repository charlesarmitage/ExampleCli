// This is the main DLL file.

#include "stdafx.h"

#include "ConcreteClrClass.h"
#include "NativeClass.h"


namespace ExampleClr {

	String^ ConcreteClrClass::ReturningStrings() {
		return gcnew String(
"I return a string as a CLR reference type. gcnew is used create me as a \
reference type that can be managed and garbage collected");
	}

	String^ ConcreteClrClass::ReturningStringFromNativeCode() {
		native_classes::NativeClass nativeClass;

		return gcnew String(nativeClass.ReturnStringFromNativeCode().c_str()) 
			+ gcnew String(". We can initialize String^ with char*");
	}

	int ConcreteClrClass::ReturnValueTypeFromClr() {
		return 876552;
	}

	int ConcreteClrClass::ReturnValueTypeFromNative() {
		native_classes::NativeClass nativeClass;

		return nativeClass.ReturnInt();
	}

	void ConcreteClrClass::WriteStringToNative(String^ managedText) {
		native_classes::NativeClass nativeClass;

		// See: https://msdn.microsoft.com/en-us/library/bb384865.aspx
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managedText);
		return nativeClass.WriteToCout(unmanaged);
	}
}

