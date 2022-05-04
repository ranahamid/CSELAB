import java.io.*;
import java.net.*;
import java.util.*;

class j2
{
	public static void main (String[] args) 
	{
	Scanner sc=new Scanner(System.in);
	

	try
	{
	InetAddress address=InetAddress.getLocalHost();
	System.out.println(address);
	InetAddress sw[]=InetAddress.getAllByName("localhost");
	System.out.println(sw[0]);
	
	InetAddress s=InetAddress.getByName("localhost");
	System.out.println(s);
	
	
	}
	catch(Exception e)
	{
	e.printStackTrace();
	}
	}
	
}


/**
 file:///c://j1.java
 **/