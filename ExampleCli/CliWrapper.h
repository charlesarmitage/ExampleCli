#pragma once
#include <msclr\marshal_cppstd.h>

using namespace System;

namespace native_classes {
	class NativeClass;
}

// A CLI file
namespace ExampleCli {

	public ref class CliWrapper {
	public :
		CliWrapper();
		~CliWrapper(); // Disposer
		!CliWrapper(); // Finalizer

		int NativeCount();

		property int CurrentCount {
			int get();
		}

	private:
		native_classes::NativeClass* nativeObj;
	};
}