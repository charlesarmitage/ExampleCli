#pragma once

// You might include me from a library etc.
#include <string>

namespace native_classes {

	class NativeClass {
	public:
		NativeClass();
		std::string ReturnStringFromNativeCode() const;
		int ReturnInt() const;

		void WriteToCout(const std::string& text) const;

		int GetCurrentCount() const;
		int ReturnCounter();

	private:
		int count;
	};

}