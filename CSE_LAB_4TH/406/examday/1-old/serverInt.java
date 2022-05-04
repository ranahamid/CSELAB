import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public interface serverInt extends Remote
{

public int add(int a,int b) throws RemoteException;
	
	
}