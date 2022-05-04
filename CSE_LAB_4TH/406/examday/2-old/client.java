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
		System.out.println("DIR -Show directory");
			System.out.println("DELETE - delete file or directory");
			System.out.println("MKDIR- Make directory");
			System.out.println("MKFILE- Make File");
			System.out.println("Enter command");
			System.out.println("____________________________________");
			
			System.out.println("Enter command : ");
			String command=sc.nextLine();
				System.out.println("Enter File or directory name : ");
			String fileName=sc.nextLine();
			
			//fact
			if(command.equalsIgnoreCase("delete"))
			{
			 String s=calling.delete_dir_file(fileName);
				System.out.println(s);
			}
			
			if(command.equalsIgnoreCase("mkdir"))
			{
			 String s=calling.make_dir(fileName);
				System.out.println(s);
			}
			
			if(command.equalsIgnoreCase("mkfile"))
			{
			 String s=calling.make_file(fileName);
				System.out.println(s);
			}
			
			if(command.equalsIgnoreCase("dir"))
			{
			 File[] listofFiles=calling.dir(fileName);
			for(int i=0;i<listofFiles.length;i++)
				{
				System.out.println(listofFiles[i].getAbsoluteFile().toString());
				}
			}
				
		}
	catch(Exception e)
		{
		}
	}    
}