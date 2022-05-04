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
			serverInt calling=(serverInt) Naming.lookup("//localhost/server");
			
			Scanner sc=new Scanner(System.in);
			System.out.println("a : ");
			int a=sc.nextInt();
			System.out.println("b : ");
			int b=sc.nextInt();
			int c=calling.add(a,b);
			
			System.out.println("sum is : "+c);
			
				
		}
	catch(Exception e)
		{
		}
	}    
}