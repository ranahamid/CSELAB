import java.rmi.*;
import java.rmi.server.*;

public class RMIMainServer
{
public static void main(String args[])
{
try{
	RMIServerImpl e1=new RMIServerImpl();
	Naming.rebind("RMIMainServer",e1);
	}catch(Exception e){System.out.println(e);}	
}
}