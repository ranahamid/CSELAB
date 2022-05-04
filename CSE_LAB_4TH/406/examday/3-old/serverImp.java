import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp extends UnicastRemoteObject implements serverInt
{

    public serverImp() throws RemoteException
    {
    }
 	
 	public String read_file(String file_name) throws RemoteException
 	{
 		String output="",line;
 		try
 		{
 			FileReader fr=new FileReader(file_name);
 			BufferedReader br=new BufferedReader(fr);
 			while((line=br.readLine())!=null)
 			{
 				output=output+line+"\n";
 			}
 		}
 		
 		
 		catch(Exception e)
 		{
 			
 		}
 		return output;
 	}
 	
 	
}