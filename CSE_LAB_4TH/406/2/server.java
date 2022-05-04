import java.rmi.*;
import java.util.*;


public class server
{
	public static void main (String[] args) 
	{
		try
			{
			serverImpl s_impl=new serverImpl();
			Naming.rebind("server",s_impl);
			System.out.println("Server is running");
			}
		catch(Exception e)
			{
			e.printStackTrace();
			}
	}
}