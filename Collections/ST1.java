import java.lang.*;
import java.util.*;




class ST1
{
	public static void main(String arg[])
	{
		Stack<Integer>obj = new Stack<Integer>();
		
		
		obj.push(11);
		obj.push(21);
		obj.push(51);
		obj.push(101);
		
		
		Iterator iobj = obj.iterator();
		while(iobj.hasNext())                           // Khalun vr display hot...stack madhun...
		{
			
			System.out.println(iobj.next());
		}
		
		System.out.println("Poped elements are : ");
		
		int no = 0;
		no = obj.pop();
		System.out.println("Poped element is : "+no);
		
		no = obj.pop();
		System.out.println("Poped element is : "+no);
	}
	
}