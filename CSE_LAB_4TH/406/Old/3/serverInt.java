import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

public interface  serverInt extends Remote
{
	public String File_read(String fileName)throws RemoteException;
}