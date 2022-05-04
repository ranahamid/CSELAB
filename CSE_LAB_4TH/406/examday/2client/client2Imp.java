import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class client2Imp extends UnicastRemoteObject implements client2Int
{

    public client2Imp() throws RemoteException
    {
    }
 	
 	public void add(int low,int high) throws RemoteException
 	{
 		int sum=0;
 		for(int i=low;i<=high;i++)
 		{
 			sum=sum+i;
 		}
 		System.out.println("sum is : "+sum);
 	}
 	
}