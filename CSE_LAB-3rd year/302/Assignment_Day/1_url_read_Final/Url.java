import java.io.*;
import java.net.*;
import java.util.*;

class Url 
{
	public static void main (String[] args) 
	{
	String st;
	Scanner sc=new Scanner(System.in);
	System.out.println("Input URL");
	st=sc.nextLine();
	try
		{
	URL url=new URL(st);
	BufferedReader br=new BufferedReader(new InputStreamReader(url.openStream()));
	String msg=br.readLine();
	while(msg!=null)
			{
			System.out.println(msg);
			msg=br.readLine();			
			}
	    }
	catch(Exception e)
	   {
	    System.out.println("Exception caught");	
	   }
	}
}

/*
 file:///c:/Url.java
 file:///H:/Education/CSE/education/3rd year/CSE_LAB/302/Assignment_Day/1_url_read_Final.java
 */