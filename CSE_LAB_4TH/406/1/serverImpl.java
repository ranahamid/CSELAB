import java.rmi.*;
import java.util.*;
import java.rmi.server.*;

class  serverImpl extends UnicastRemoteObject implements serverInt
{
	public static String[] database={"i","eat","rice","he","she","boy","girl","go","to","goes","am","scholl","university"};
	
	public static Vector<String>db=new Vector<String>();
	
	public  serverImpl()throws RemoteException
	{
	}
	
	
	public Vector<String> spell_check(String sentence) throws RemoteException
	{
   // sentence="i ear eat schol rana he she";	
	
	for(String s:database)
	{
		db.add(s);
	}
	
	String st;
    Vector<String>errorV=new Vector<String>();
	 
	 StringTokenizer token=new StringTokenizer(sentence);
	 while(token.hasMoreTokens())
		{
		st=token.nextToken().toLowerCase();
		if(!(db.contains(st)))
			{
			errorV.add(st);
			}
		}	
	 return errorV;
	 }	
}