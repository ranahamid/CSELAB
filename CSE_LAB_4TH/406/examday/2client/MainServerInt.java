import java.util.*;
import java.rmi.*;
import java.rmi.server.*;


public interface MainServerInt extends Remote 
{
	public int add(int a,int b)throws RemoteException;
}