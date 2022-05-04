import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

public interface serverInt extends Remote
{

	public String make_dir(String dir_name) throws RemoteException;
	public String make_file(String file_name) throws RemoteException;
	public String delete_dir_file(String file_dir_name) throws RemoteException;
	public File[] dir(String dir_name) throws RemoteException;
	
	
}