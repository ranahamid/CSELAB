import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp2 extends UnicastRemoteObject implements serverInt2
{

    public serverImp2() throws RemoteException
    {
    }
 	
 
	public List<Integer> desc_sort(List<Integer>seq) throws RemoteException
	{
		Collections.sort(seq);
		Collections.reverse(seq);
		return seq;
	}
 	
 	
}