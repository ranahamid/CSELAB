import java.io.*;
import java.net.*;
import java.util.*;

class j1
{
	public static void main (String[] args) 
	{
	Scanner sc=new Scanner(System.in);
	System.out.println("Input address: ");
	String st=sc.nextLine();
	try
	{
	
	URL url=new URL(st);
	BufferedReader br=new BufferedReader(new InputStreamReader(url.openStream()));
	String msg=br.readLine();
	while(msg!=null)
	    {
	    System.out.println(msg+" ");
	     msg=br.readLine();
	    }
	}
	catch(Exception e)
	{
	e.printStackTrace();
	}
	}
	
}
