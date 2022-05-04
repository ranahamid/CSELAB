import java.rmi.*;
import java.rmi.server.*;

public class RMIChildImpl extends UnicastRemoteObject implements RMIChildIntf
{
	public RMIChildImpl() throws RemoteException
	{
		
	}
      
        
        public int total(int a,int b) throws RemoteException
        {
                System.out.println(a+" "+b);
		for(int i=a+1;i<=b;i++)
			a+=i;
		
		return a;
        }

	//private string name;
}