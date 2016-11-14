#include "Stdafx.h"
#include "CliWrapper.h"
#include "NativeClass.h"

namespace ExampleCli {

	CliWrapper::CliWrapper() 
	: nativeObj(new native_classes::NativeClass) {
	}

	CliWrapper::~CliWrapper() { // Destructor is the Dispose in the disposable pattern
		this->!CliWrapper(); // Call finalizer
	}

	CliWrapper::!CliWrapper() { // Finalizer
		delete nativeObj;
		nativeObj = nullptr; // In case finalizer called more than once
	}

	int CliWrapper::CurrentCount::get() {
		return nativeObj->GetCurrentCount();
	}

	int CliWrapper::NativeCount() {
		return nativeObj->ReturnCounter();
	}
}