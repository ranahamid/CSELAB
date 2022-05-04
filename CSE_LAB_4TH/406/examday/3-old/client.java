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
			System.out.println("____________________________________");
		
			
			
			System.out.println("Enter Filename : ");
			String fileName=sc.nextLine();
			String output=calling.read_file(fileName);
					System.out.println(output);
		
		
				
		}
	catch(Exception e)
		{
		}
	}    
}