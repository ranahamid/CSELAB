import java.rmi.*;
import java.rmi.server.*;

public class RMIServerImpl extends UnicastRemoteObject implements RMIServerIntf
{
	public RMIServerImpl() throws RemoteException
	{
		
	}
      
        
        public int total(int a,int b) throws RemoteException
        {
		
		String url="rmi://localhost/";
		try{
                	RMIChildIntf c1=(RMIChildIntf) Naming.lookup(url+"RMIChildServer1");
      			RMIChildIntf c2=(RMIChildIntf) Naming.lookup(url+"RMIChildServer2");
			System.out.println(a+ " " +b); 
			return c1.total(a,b/2) + c2.total(b/2+1,b);
		   }catch(Exception e){System.out.println(e); return 0;}
	
        }

	//private string name;
}