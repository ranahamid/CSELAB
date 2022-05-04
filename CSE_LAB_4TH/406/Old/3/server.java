import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

class server
{
	public static void main (String[] args) 
	{
	try	
		{
		serverImpl s_impl =new serverImpl();
		Naming.rebind("server",s_impl);
		System.out.println("server is running....");
		}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}