import java.util.*;
import java.rmi.*;
import java.rmi.server.*;




public class server2 
{
	public static void main (String[] args) 
	{
		try{
		serverImp2 s_imp2=new serverImp2();
		Naming.rebind("server2",s_imp2);
		System.out.println("Server2 is running....");
		}
		catch(Exception e)
		{
		}
	
	}
	
}