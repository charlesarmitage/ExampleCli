using System;
using ExampleCli;

namespace ExampleCliConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            var clClass = new ConcreteCliClass();
            Console.WriteLine(clClass.ReturningStrings() + "\n");
            Console.WriteLine(clClass.ReturningStringFromNativeCode() + "\n");

            Console.WriteLine("Value from CLR: " + clClass.ReturnValueTypeFromClr());
            Console.WriteLine("Value from native: " + clClass.ReturnValueTypeFromNative());

            clClass.WriteStringToNative("Text from clr");

            Console.WriteLine("\nWrapped objects must be kept on the heap so use wrapped native objects in the same way as the pimpl idiom\n");
            var wrapper = new CliWrapper();
            Console.WriteLine("Native count: " + wrapper.NativeCount());
            Console.WriteLine("Native count: " + wrapper.NativeCount());
            Console.WriteLine("Native count: " + wrapper.NativeCount());

            Console.WriteLine("\nCurrent count: " + wrapper.CurrentCount + "\n");
        }
    }
}
