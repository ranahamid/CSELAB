
import java.util.*;
import java.rmi.*;
import java.rmi.server.*;



public class MainServerImp extends UnicastRemoteObject implements MainServerInt
{

    public MainServerImp() throws RemoteException
    {
    }
    
    
	public int add(int low,int high)throws RemoteException
	{
		int total=0;
		try
		{
			serverInt1 calling1=(serverInt1) Naming.lookup("//localhost/server1");
			
			
				
			int c=low+(high-low)/2;	
			int sum1=calling1.add(low,c);
			int d;
			if(c<high)
				d=c+1;
			else
				d=c;
			serverInt2 calling2=(serverInt2) Naming.lookup("//localhost/server2");
			int sum2=calling2.add(d,high);
			
			 total=sum1+sum2;
			
		}
		catch(Exception e)
		{
			
		}
		return  total;
	}
    
}