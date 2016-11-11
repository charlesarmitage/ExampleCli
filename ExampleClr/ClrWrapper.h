// ExampleClr.h

#pragma once
#include <msclr\marshal_cppstd.h>

using namespace System;

namespace native_classes {
	class NativeClass;
}

// A CLR file
namespace ExampleClr {

	public ref class ClrWrapper {
	public :
		ClrWrapper();
		~ClrWrapper(); // Disposer
		!ClrWrapper(); // Finalizer

		int NativeCount();

		property int CurrentCount {
			int get();
		}

	private:
		native_classes::NativeClass* nativeObj;
	};
}