import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

public interface serverInt extends Remote
{
	public Map<String,Integer> count_word(String sentence) throws RemoteException;
}