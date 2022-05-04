import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public interface serverInt1 extends Remote
{

	public int add(int[] seq) throws RemoteException;
	
	
}