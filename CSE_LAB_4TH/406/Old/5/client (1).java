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
			do
				{
				System.out.print("Enter lowest range : ");
				low=sc.nextInt();
				
				System.out.print("Enter highest range : ");
				high=sc.nextInt();
				}while(low>high);
			
			try
				{
				serverInt1 calling1=(serverInt1)Naming.lookup("//localhost/server1");
				
				int c=low+(high-low)/2;
				int sum1=calling1.add(low,c);
				
				
				serverInt2 calling2=(serverInt2)Naming.lookup("//localhost/server2");
			
				int d;
				if(c<high)
					d=c+1;
				else
					d=c;
					
				int sum2=calling2.add(d,high);
				
				int total=sum1+sum2;
				System.out.println("The total sum is : "+total);
				
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