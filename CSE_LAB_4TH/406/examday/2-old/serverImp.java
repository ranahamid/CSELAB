import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp extends UnicastRemoteObject implements serverInt
{

    public serverImp() throws RemoteException
    {
    }
 	
 	
 	public String make_dir(String dir_name) throws RemoteException
 	{
 		boolean  is_create=false;
 		File dir=new File(dir_name);
 		if(!(dir.exists()))
 		{
 			is_create=dir.mkdir();
 		}
 		String s="";
 		if(is_create)
 		{
 			s="dir created successfully...";
 		}
 		else
 		{
 			s="dir is not created successfully...";
 		}
 		return s;
 	}
 	
	public String make_file(String file_name) throws RemoteException
	{
		boolean  is_create=false;
		File file=new File(file_name);
		if(!(file.exists()))
		{
			try
				{
				is_create=file.createNewFile();
				}
			catch(Exception e)
			{
			}
			
		}
		
		String s="";
 		if(is_create)
 		{
 			s="File created successfully...";
 		}
 		else
 		{
 			s="file is not created successfully...";
 		}
 		return s;
	}
	public String delete_dir_file(String file_dir_name) throws RemoteException
	{
		File dir_file=new File(file_dir_name);
		boolean is_delete=false;
		if(dir_file.exists())
		{
			is_delete=dir_file.delete();
		}
		String s="";
		if(is_delete)
		{
			s="file or dir deleted successfully...";	
		}
		else
		{
		
				s="file or dir is not deleted successfully...";
		}
			return  s;
	}
	public File[] dir(String dir_name) throws RemoteException
	{
	File dir=new File(dir_name);
	File[] listofFiles=dir.listFiles();
	return listofFiles;
	}
}