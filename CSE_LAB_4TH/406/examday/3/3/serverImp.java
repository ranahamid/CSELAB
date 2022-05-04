import java.util.*;
import java.io.*;
import java.rmi.*;
import java.rmi.server.*;


public class serverImp extends UnicastRemoteObject implements serverInt
{

    public serverImp() throws RemoteException
    {
    }
    
    public Map<String,Integer>word_count(String sentence) throws RemoteException
    {
    	Map<String,Integer>m=new HashMap<String,Integer>();
    	StringTokenizer token=new StringTokenizer(sentence);
    	String word="";
    	while(token.hasMoreTokens())
    	{
    		word=token.nextToken().toLowerCase();
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