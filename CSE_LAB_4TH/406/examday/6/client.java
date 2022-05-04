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
			
			
			List<Integer>b=new ArrayList<Integer>();
			
			for(int i=0;i<n;i++)
			{
			b.add(sc.nextInt());	
			}
			
			List<Integer>list1=calling1.asc_sort(b);
			System.out.println("Asc is : "+list1);
			
			serverInt2 calling2=(serverInt2)Naming.lookup("//localhost/server2");
			List<Integer>list2=calling2.desc_sort(b);
			System.out.println("desc is : "+list2);
		
				
		}
	catch(Exception e)
		{
		}
	}    
}