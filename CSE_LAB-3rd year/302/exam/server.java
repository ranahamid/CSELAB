import java.net.*;
import java.util.Scanner;
import java.io.*;

class server
{
	public int port=9201;
	
	public static void main (String[] args) 
	{
	try
		{
	
		ServerSocket c1=new ServerSocket(port);
		System.out.println("Waiting");
		Socket c=c1.accept();
		BufferedReader br=new BufferedReader()
		
		}
	catch(Exception e)
	    {
	    e.printStackTrace();
	    }
	}
}
