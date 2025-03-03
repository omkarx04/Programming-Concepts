import java.lang.*;
import java.util.*;

class AL
{
	public static void main(String arg[])
	{
		ArrayList<String>obj = new ArrayList<String>();
		obj.add("January");
		obj.add("February");
		obj.add("March");
		obj.add("Marvellous");
		obj.add("April");
		obj.add(2,"New");
		obj.add("May");
		obj.add("Marvellous");
		obj.add("Marvellous");
		obj.add("Marvellous");
		
		System.out.println("ArrayList contains :"+obj);
		System.out.println("Size is :"+obj.size());
		
		System.out.println("elements re using for lop");
		for(int i = 0;i < obj.size();i++)
		{
			System.out.println(obj.get(i));
		}
		
		String str;
		int iCnt = 0;
		for(int i = 0;i < obj.size();i++)
		{
			str = obj.get(i);
			if(str.equals("Marvellous"))
			{
				iCnt++;
			}
		}
		System.out.println("element Marvellous occurs at "+iCnt+" times in the array list");
		
		
		
		if(obj.contains("April"))
		{
			System.out.println("Element is there");
		}
		
		int ret = obj.indexOf("April");
		System.out.println("Element is :"+ret);
		
		System.out.println("Element is index 3 is:"+obj.get(3));
		
		obj.remove(3);
		obj.remove("April");
		System.out.println("Updated list is :"+obj);
		
		Iterator iobj = obj.iterator();
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		
		obj.clear();
		System.out.println("Updated list is :"+obj);
	}
}