#include "Stdafx.h"
#include "ClrWrapper.h"
#include "NativeClass.h"

namespace ExampleClr {

	ClrWrapper::ClrWrapper() 
	: nativeObj(new native_classes::NativeClass) {
	}

	ClrWrapper::~ClrWrapper() { // Destructor is the Dispose in the disposable pattern
		this->!ClrWrapper(); // Call finalizer
	}

	ClrWrapper::!ClrWrapper() { // Finalizer
		delete nativeObj;
		nativeObj = nullptr; // In case finalizer called more than once
	}

	int ClrWrapper::CurrentCount::get() {
		return nativeObj->GetCurrentCount();
	}

	int ClrWrapper::NativeCount() {
		return nativeObj->ReturnCounter();
	}
}