import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;



class serverImpl1 extends UnicastRemoteObject implements serverInt1
{
	public serverImpl1() throws RemoteException
	{
		
	}
	
	public List<Integer> sort_asc(List<Integer> a) throws  RemoteException
	{
		Collections.sort(a);
		return a;
	}

}