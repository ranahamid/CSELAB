import java.util.*;
import java.io.*;
import java.rmi.*;
import java.rmi.server.*;



public class server 
{
public static void main (String[] args) 
	{
		try
		{
			serverImp s_imp=new serverImp();
			Naming.rebind("server",s_imp);
			System.out.println("Server is running....");
	
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}