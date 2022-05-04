import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public interface client2Int extends Remote
{
	public void  add(int low,int high) throws RemoteException;
}