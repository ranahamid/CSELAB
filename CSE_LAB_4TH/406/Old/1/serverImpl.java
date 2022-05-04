import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

class serverImpl extends UnicastRemoteObject implements serverInt
{
	public serverImpl() throws RemoteException
	{
		
	}
	
    public int add(int a,int b) throws RemoteException
    {
    	return a+b;
    }
}