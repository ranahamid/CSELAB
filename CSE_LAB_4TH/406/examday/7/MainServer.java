import java.util.*;
import java.rmi.*;
import java.rmi.server.*;



public class MainServer 
{
public static void main (String[] args) 
{
	try
	{
		MainServerImp main_server_imp=new MainServerImp();
		Naming.rebind("mainServer",main_server_imp);
		System.out.println("Main server is running....");
	}
	catch(Exception e)
	{
		e.printStackTrace();
	}
}
    
    
}