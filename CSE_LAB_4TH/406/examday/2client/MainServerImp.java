
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
			client2Int calling1=(client2Int) Naming.lookup("//localhost/client2");
			calling1.add(low,high);
		}
		catch(Exception e)
		{
			
		}
		return  total;
	}
    
}