import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;


class serverImpl extends UnicastRemoteObject implements serverInt
{
	public serverImpl() throws RemoteException
	{
		
	}
	
   public String File_read(String fileName)throws RemoteException
   {
	String line,output="";
	try
		{
			
			FileReader fr=new FileReader(fileName);
			BufferedReader br=new BufferedReader(fr);
			while((line=br.readLine())!=null)
				{
				output=output+line+"\n";
				}   	
		}
	catch(Exception e)
		{
		e.printStackTrace();
		}
   return output;
   }
}