import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public class serverImp extends UnicastRemoteObject implements serverInt
{

    public serverImp() throws RemoteException
    {
    }
 	
 	
 
public int add(int a,int b) throws RemoteException
{
	return a+b;
}
}