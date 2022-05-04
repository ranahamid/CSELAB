import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;



public class client 
{
public static void main (String[] args) 
	{
	try 
		{
			serverInt1 calling1=(serverInt1) Naming.lookup("//localhost/server1");
			
			Scanner sc=new Scanner(System.in);
			int low,high;
			do
				{
				System.out.println("Lowest value : ");
				low=sc.nextInt();
				
				System.out.println("highest value : ");
				high=sc.nextInt();
				}while(low>=high);
				
			int c=low+(high-low)/2;	
			int sum1=calling1.add(low,c);
			int d;
			if(c<high)
				d=c+1;
			else
				d=c;
			serverInt2 calling2=(serverInt2) Naming.lookup("//localhost/server2");
			int sum2=calling2.add(d,high);
			
			int total=sum1+sum2;
			
				System.out.println("total value : "+total);	
		
				
		}
	catch(Exception e)
		{
		}
	}    
}