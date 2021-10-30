// I like this java program because it can reverse a word

import java.io.*;
import java.util.Scanner;

class GFG {
	public static void main (String[] args) {
	
		String str= "Rashmi", nstr="";
		char ch;
	
	System.out.print("Original word: ");
	System.out.println("Rashmi");
	
	for (int i=0; i<str.length(); i++)
	{
		ch= str.charAt(i); 
		nstr= ch+nstr; 
	}
	System.out.println("Reversed word: "+ nstr);
	}
}


