import java.rmi.*;
import java.util.*;



public interface serverInt extends Remote
{
 public Map<String,Integer> word_count(String sentence) throws RemoteException;	
}