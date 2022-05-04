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
		MainServerInt calling=(MainServerInt)Naming.lookup("//localhost/mainServer");
			Scanner sc=new Scanner(System.in);
			int low,high;
			do
				{
				System.out.println("Lowest value : ");
				low=sc.nextInt();
				
				System.out.println("highest value : ");
				high=sc.nextInt();
				}while(low>=high);
				int total=calling.add(low,high);
		  System.out.println("total value : "+total);	
		
				
		}
	catch(Exception e)
		{
		}
	}    
}