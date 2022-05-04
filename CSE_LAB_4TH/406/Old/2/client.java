import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;


class client
{
	public static void main (String[] args) 
	{
		try
		{
			serverInt calling=(serverInt)Naming.lookup("//localhost/server");
			Scanner sc=new Scanner(System.in);
			System.out.println("DIR -Show directory");
			System.out.println("DELETE - delete file or directory");
			System.out.println("MKDIR- Make directory");
			System.out.println("MKFILE- Make File");
			System.out.println("Enter command");
			String command=sc.nextLine();
			
			
			//MKFILE
			if(command.equalsIgnoreCase("MKFILE"))
			{
			System.out.println("Enter file name");
			String dir=sc.nextLine();
			String result=calling.make_file(dir);
			System.out.println(result);
			}
			
			
			
			//delete
			
			if(command.equalsIgnoreCase("DELETE"))
			{
			System.out.println("Enter file OR folder name");
			String dir=sc.nextLine();
			String result=calling.delete_file_dir(dir);
			System.out.println(result);
			}
			
			
			
			//MKFILE
			if(command.equalsIgnoreCase("MKDIR"))
			{
			System.out.println("Enter directory name");
			String dir=sc.nextLine();
			String result=calling.make_dir(dir);
			System.out.println(result);
			}
			
			
			
			//DIR
			if(command.equalsIgnoreCase("DIR"))
			{
				System.out.println("Enter Directory to show file or folder");
				System.out.println("Name should be like c://");
				String dir=sc.nextLine();
				File[] listofFiles=calling.show_dir(dir);
				for(int i=0;i<listofFiles.length;i++)
					{
					System.out.println(listofFiles[i].getAbsoluteFile().toString());
					}
			}
			
			
			
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