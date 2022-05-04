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
			System.out.println("how many numbers?");
			int n=sc.nextInt();
			System.out.println("Enter the numbers");
			int num[]=new int[n];
			
			for(int i=0;i<n;i++)
			{
			num[i]=sc.nextInt();	
			}
			
			int nn=calling1.add(num);
			System.out.println("addition is : "+nn);
			
			serverInt2 calling2=(serverInt2)Naming.lookup("//localhost/server2");
			int m=calling2.multiply(num);
			System.out.println("multiplication is : "+m);
		
				
		}
	catch(Exception e)
		{
		}
	}    
}