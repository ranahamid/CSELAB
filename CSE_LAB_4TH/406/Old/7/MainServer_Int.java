import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

public interface MainServer_Int extends Remote
{
	public int add(int a,int b)throws RemoteException;
}