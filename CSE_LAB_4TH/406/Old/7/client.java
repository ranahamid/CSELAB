import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;


class client
{
	public static void main (String[] args) 
	{
		
			int low;int high;
			Scanner sc=new Scanner(System.in);
			do{
			System.out.print("Enter lowest range : ");
			low=sc.nextInt();
			
			System.out.print("Enter highest range : ");
			high=sc.nextInt();
			}while(low>=high);
			
			try
				{
				MainServer_Int calling1=(MainServer_Int)Naming.lookup("//localhost/MainServer");
				int sum1=calling1.add(low,high);
				System.out.println("Total: "+sum1);
				
				}
		    catch(Exception e)
			    {
			    e.printStackTrace();
			    }
	}
}






/*
1.	Using RMI, implement the following: Read two integers from console of local machine, 
print the value of two integers in remote machine, calculate the sum in remote machine 
and print the result in local and remote machine. 
*/