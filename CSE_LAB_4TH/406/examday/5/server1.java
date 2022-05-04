import java.util.*;
import java.rmi.*;
import java.rmi.server.*;




public class server1 
{
	public static void main (String[] args) 
	{
		try{
		serverImp1 s_imp1=new serverImp1();
		Naming.rebind("server1",s_imp1);
		System.out.println("Server1 is running....");
		}
		catch(Exception e)
		{
		}
	
	}
	
}