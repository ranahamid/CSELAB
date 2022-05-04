import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp1 extends UnicastRemoteObject implements serverInt1
{

    public serverImp1() throws RemoteException
    {
    }
 	
 	public List<Integer> asc_sort(List<Integer>seq) throws RemoteException
 	{
 		 Collections.sort(seq);
 		 return seq;
 	}
 	
}