import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

public interface serverInt extends Remote
{
	public Vector<String> spell_check(String sentence) throws RemoteException;
 
}