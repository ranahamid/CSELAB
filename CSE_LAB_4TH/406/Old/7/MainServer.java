import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

public class MainServer 
{
	public static void main (String[] args) 
		{
			try{
				MainServer_Imp m_imp=new MainServer_Imp();
				Naming.rebind("MainServer",m_imp);
				System.out.println("Main Server is running");
			   }
			catch(Exception e)
				{
				e.printStackTrace();
				}
		}
}