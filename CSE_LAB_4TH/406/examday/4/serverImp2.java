import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp2 extends UnicastRemoteObject implements serverInt2
{

    public serverImp2() throws RemoteException
    {
    }
 	
 	public int multiply(int[] seq) throws RemoteException
 	{
 		int sum=1;
 		System.out.println("multiplication");
 		for (int i=0;i<seq.length;i++)
 		{
 			sum=sum*seq[i];
 			System.out.println(seq[i]);
 		}
 		
 			System.out.println("sum is : "+sum);
 		return sum;
 	}
 	
 	
}