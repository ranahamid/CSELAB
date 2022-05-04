import java.util.*;
import java.rmi.*;
import java.rmi.server.*;




public class client2
{
	public static void main (String[] args) 
	{
		try{
		client2Imp s_imp1=new client2Imp();
		Naming.rebind("client2",s_imp1);
		System.out.println("Client2 is running....");
		}
		catch(Exception e)
		{
		}
	
	}
	
}