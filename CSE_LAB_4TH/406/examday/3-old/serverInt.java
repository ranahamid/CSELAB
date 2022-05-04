import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public interface serverInt extends Remote
{

	public String read_file(String file_name) throws RemoteException;
	
	
}