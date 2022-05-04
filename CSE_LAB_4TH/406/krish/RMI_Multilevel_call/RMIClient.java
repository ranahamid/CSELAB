import java.rmi.*;
import java.rmi.server.*;

public class RMIClient
{
public static void main(String args[])
{
	String url="rmi://localhost/";
	try{
		
                RMIServerIntf c3=(RMIServerIntf) Naming.lookup(url+"RMIMainServer");
                
		System.out.println("The total is : "+c3.total(1,10));
                
		}catch(Exception e){}
System.exit(0);
}	
}