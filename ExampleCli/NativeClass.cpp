#include "Stdafx.h"
#include "NativeClass.h"
#include <iostream>

namespace native_classes {

	NativeClass::NativeClass()
		: count(0) {
	}

	std::string NativeClass::ReturnStringFromNativeCode() const {
		return "Returning a std::string from some native code";
	}

	int NativeClass::ReturnInt() const {
		return 5678432;
	}

	void NativeClass::WriteToCout(const std::string& text) const {
		std::cout << "From native: " << text << '\n';
	}

	int NativeClass::GetCurrentCount() const {
		return count;
	}
	int NativeClass::ReturnCounter() {
		return count++;
	}
}