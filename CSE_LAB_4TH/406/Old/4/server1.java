import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

class server1
{
	public static void main (String[] args) 
	{
	try	
		{
		serverImpl1 s_impl1 =new serverImpl1();
		Naming.rebind("server1",s_impl1);
		System.out.println("server1 is running....");
		}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}