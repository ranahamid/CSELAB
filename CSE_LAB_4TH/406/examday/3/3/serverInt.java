import java.util.*;
import java.io.*;
import java.rmi.*;
import java.rmi.server.*;


public interface serverInt extends Remote
{
	public Map<String,Integer>word_count(String sentence) throws RemoteException;
}