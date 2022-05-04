import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;



class serverImpl extends UnicastRemoteObject implements serverInt
{
	public serverImpl() throws RemoteException
	{
		
	}
	
	//make_dir
   	public String make_dir(String dir_name) throws  RemoteException
   	{
   	boolean is_create=false;	
   	try
   		{
   		File dirName=new File(dir_name);
		if(!(dirName.exists()))
			{
			is_create=dirName.mkdir();
			}
		else
			{
			System.out.println("Directory exists...");
			}
	
   		}	
	catch(Exception e)
		{
		e.printStackTrace();
		}	   	
   	if(is_create)
   		{
   		return "Directory created successfully.";
   		}
   	else
   		{
   		return "Directory is not created.";
   		}
	/*
	File files= new File("C:\\Directory2\\Sub2\\Sub-Sub2");
	if(!(files.exists()))
	  {
		files.mkdirs();
	  }
	*/
   	}
	
	//make_file
	public String make_file(String file_name) throws RemoteException
	{
   	boolean is_create=false;	
   	try
   		{
   		File FileName=new File(file_name);
		if(!(FileName.exists()))
			{
			is_create=FileName.createNewFile();
		}
		else
			{
			System.out.println("File exists...");
			}
	
   		}	
	catch(Exception e)
		{
		e.printStackTrace();
		}	   	
   	if(is_create)
   		{
   		return "File created successfully.";
   		}
   	else
   		{
   		return "File is not created.";
   		}
   	
   	
   	}
	
	
	public String delete_file_dir(String file_dir_name) throws RemoteException
	{
		boolean is_delete=false;	
   	try
   		{
   		File FileName=new File(file_dir_name);
		if(FileName.exists())
			{
			is_delete=FileName.delete();
			}
		else
			{
			System.out.println("File or Folder is not exists...");
			}
	
   		}	
	catch(Exception e)
		{
		e.printStackTrace();
		}	   	
   	if(is_delete)
   		{
   		return "File or folder deleted successfully.";
   		}
   	else
   		{
   		return "File or folder is not deleted.";
   		}	
   	}
	
	
	public File[] show_dir(String dir) throws RemoteException
	{
		File showDir=new File(dir);
		File[] listofFiles=showDir.listFiles();
		
		return listofFiles;
   	}

}