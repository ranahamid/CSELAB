import java.rmi.*;
import java.rmi.server.*;

public class RMIChildServer1
{
public static void main(String args[])
{
try{
	RMIChildImpl e1=new RMIChildImpl();
	Naming.rebind("RMIChildServer1",e1);
	}catch(Exception e){}	
}
}