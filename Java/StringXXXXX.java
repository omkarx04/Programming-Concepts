import java.io.*;

class StringXXXXX
{
	public static void main(String a[]) 
	{
		String str1 = "Hello";  // 100
		String str2 = "Hello";  // 100
		String str3 = new String("Hello");  // 200
		
		if(str1 == str3) // if(100 == 200)  compares hashcode
		{
			System.out.println("Strings are same");
		}
		else
		{
			System.out.println("Strings are different");
		}
		
		if(str1.equals(str3)) // if("Hello".equals("Hello"))  compares data
		{
			System.out.println("Strings are same");
		}
		else
		{
			System.out.println("Strings are different");
		}
		
	}
	
}