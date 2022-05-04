import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

class server2
{
	public static void main (String[] args) 
	{
	try	
		{
		serverImpl2 s_impl2 =new serverImpl2();
		Naming.rebind("server2",s_impl2);
		System.out.println("server2 is running....");
		}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}