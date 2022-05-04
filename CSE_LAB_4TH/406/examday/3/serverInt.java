import java.util.*;
import java.rmi.*;
import java.rmi.server.*;

public interface serverInt extends Remote
{
	public int fact(int n) throws RemoteException;
	public int fib(int n) throws RemoteException;
	public int[] fiblist(int n) throws RemoteException;
	public int prime(int n) throws RemoteException;
	public int[] primelist(int n) throws RemoteException;
	public List<Integer> factor(int n) throws RemoteException;
}