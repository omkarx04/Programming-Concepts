import java.io.*;

class StringX
{
	public static void main(String a[]) 
	{
		// String literal
		String str1 = "Hello";
		String str2 = "World";
		
		System.out.println(str1);   // Hello
		System.out.println(str1.length());   //5  length() is method
		
		String str3 = str1 + str2;
		System.out.println(str3);   // HelloWorld
		String str4 = "Hello";
		
		// String objects 
		String str5 = new String("Hello");
		String str6 = new String("World");
		String str7 = new String("Hello");
		
		System.out.println("Data is :"+str1);
	}
	
}