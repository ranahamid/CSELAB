import java.rmi.*;
import java.util.*;
import java.rmi.server.*;

class  serverImpl extends UnicastRemoteObject implements serverInt
{

	


	public  serverImpl()throws RemoteException
	{
		
	}
	
	
	public Map<String,Integer> word_count(String sen) throws RemoteException
	{
		
	StringTokenizer token=new StringTokenizer(sen);
    Map<String,Integer>m=new HashMap<String,Integer>();
   
    while(token.hasMoreTokens())
      {
   		String word=token.nextToken().toLowerCase();
   		if(m.containsKey(word))
   		{
   			int n=m.get(word);
   			m.put(word,n+1);
   		}
   		else
   		{
   			m.put(word,1);
   		}
      }
   return m;
   }	
}