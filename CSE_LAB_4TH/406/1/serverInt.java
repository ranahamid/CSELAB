import java.rmi.*;
import java.util.*;


public interface serverInt extends Remote
{
 public Vector<String> spell_check(String sentence) throws RemoteException;	
}

