// C# program to illustrate the problems
// with public and private members
using System;

// public class
public class C1
{
	
	// public data members
	public int rn;
	public string name;
	
	// private field
	// private int marks = 35;

}

// another public class
public class C2
{
	
// Main Method
public static void Main(string[] args)
{
	
	// Creating object of C1 class
	C1 obj = new C1();
	
	// setting values to public
	// data members of class C1
	obj.rn = 10000;
	obj.name = null;
	
	// setting values to private
	// data members of class C1
	// obj.mark = 0;
	
	// display result
	Console.WriteLine("Name: {0} \nRoll No: {1}", obj.name, obj.rn);
	
}
}
