using System;
using System.IO;
using System.Text;

namespace IncludeHelp
{
    class Test
    {
        
        static void Main(string[] args)
        {
            //using \n
            Console.WriteLine("Hello\nWorld");
            //using \x0A
            Console.WriteLine("Hello\x0AWorld");
            Console.WriteLine();

            Console.WriteLine("end of the program");

            
            Console.ReadLine();
        }
    }
}
