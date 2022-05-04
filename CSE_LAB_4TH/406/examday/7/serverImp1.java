import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp1 extends UnicastRemoteObject implements serverInt1
{

    public serverImp1() throws RemoteException
    {
    }
 	
 	public int  add(int low,int high) throws RemoteException
 	{
 		int sum=0;
 		for(int i=low;i<=high;i++)
 		{
 			sum=sum+i;
 		}
 		return sum;
 	}
 	
}