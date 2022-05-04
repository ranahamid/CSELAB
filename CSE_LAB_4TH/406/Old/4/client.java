import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;


class client
{
	public static void main (String[] args) 
	{
		
			
			Scanner sc=new Scanner(System.in);
			System.out.println("How many number?");
			int n=sc.nextInt();
			int[] a=new int[n];//declare int array of size n
			System.out.println("Enter the sequence");
			for(int i=0;i<n;i++)
				{
				a[i]=sc.nextInt();
				}
			try
				{
				serverInt1 calling1=(serverInt1)Naming.lookup("//localhost/server1");
				int sum1=calling1.add(a);
				System.out.println("The sum is : "+sum1);
				
				serverInt2 calling2=(serverInt2)Naming.lookup("//localhost/server2");
				int sum2=calling2.multiply(a);
				System.out.println("The multiplication is : "+sum2);
				
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