//import java.lang.*;

class Mythread1
{
	public static void main(String arg[])
	{
		System.out.println("Inside maim");
		
		Thread tobj = Thread.currentThread();
		
		System.out.println("Name of current thread is : "+tobj.getName());
	}
}