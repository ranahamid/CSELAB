import java.io.*;
import java.net.*;
import java.util.*;

class j2
{
	public static int port=9;
	public static void main (String[] args) 
	{
	Scanner sc=new Scanner(System.in);
	

	try
	{
	String host="localhost";
	Socket c1=new Socket(host,port);
	System.out.println("Connected");
	PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	String msg=sc.nextLine();
	while(!msg.equalsIgnoreCase("close"))
	    {
	    p.println(msg);
	    String c=br.readLine();
	    System.out.println(c);
	    msg=sc.nextLine();
	    
	    }
	}
	catch(Exception e)
	{
	System.out.println("Not Connected");
	e.printStackTrace();
	}
	}
	
}


/**
 file:///c://j1.java
 **/