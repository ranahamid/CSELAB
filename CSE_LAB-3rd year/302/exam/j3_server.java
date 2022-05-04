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
	ServerSocket c2=new ServerSocket(port);
	System.out.println("Waiting");
	Socket c1=c2.accept();
	PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	String msg=br.readLine();
    while(!msg.equalsIgnoreCase("close"))
		{
		System.out.println(msg);
		Date d=new Date();
		p.println(d);
		msg=br.readLine();
		}
	br.close();
	p.close();
	c1.close();
	c2.close();
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