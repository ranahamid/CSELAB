import java.rmi.*;
import java.util.*;



public interface serverInt extends Remote
{
 public int Fact(int n) throws RemoteException; 
 public int Fib(int n) throws RemoteException;
 public int[]  FibList(int n) throws RemoteException;
 public int  Prime(int n) throws RemoteException;
 public int[]  PrimeList(int n) throws RemoteException;
 public List<Integer>  Factor(int n) throws RemoteException;	

}