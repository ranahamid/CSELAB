import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;



class serverImpl2 extends UnicastRemoteObject implements serverInt2
{
	public serverImpl2() throws RemoteException
	{
		
	}
	
	public List<Integer> sort_desc(List<Integer> a) throws  RemoteException
	{
		Collections.sort(a,Collections.reverseOrder());
		return a;
	}

}