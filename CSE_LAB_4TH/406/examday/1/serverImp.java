import java.util.*;
import java.rmi.*;
import java.rmi.server.*;


public class serverImp extends UnicastRemoteObject implements serverInt
{
	public static String[] database={"i","he","she","boy","girl"};
	
	public static Vector<String> db=new Vector<String> ();
	
    public serverImp() throws RemoteException
    {
    }
 	public Vector<String> spell_check(String sentence) throws RemoteException
 	{
 		Vector<String> error_list=new Vector<String>();
 		for(String s:database)
 		{
 			db.add(s);
 		}
 		
 		String st;
 		StringTokenizer token=new StringTokenizer(sentence);
 		while(token.hasMoreTokens())
 		{
 			st=token.nextToken().toLowerCase();
 			if(!(db.contains(st)))
 			{
 				error_list.add(st);
 			}
 		}
 		
 		return error_list;
 	}
}