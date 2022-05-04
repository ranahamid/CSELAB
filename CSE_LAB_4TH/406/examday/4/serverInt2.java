import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public interface serverInt2 extends Remote
{

	public int multiply(int[] seq) throws RemoteException;
	
	
}