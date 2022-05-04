import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;



class serverImpl2 extends UnicastRemoteObject implements serverInt2
{
	public serverImpl2() throws RemoteException
	{
		
	}
	
	public int add(int low,int high) throws  RemoteException
	{
		int sum=0;
		for(int i=low;i<=high;i++)
		{
			sum=sum+i;
		}
		return sum;
	}

}