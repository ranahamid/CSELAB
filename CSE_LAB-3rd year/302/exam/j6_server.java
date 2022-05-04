import java.util.Scanner;
import java.io.*;
import java.net.*;

class j6
{
	public static void main (String[] args) 
	{
	try
	{
	ServerSocket c2=new ServerSocket(9201);
	System.out.println("Waiting");
	Socket c1=c2.accept();
	
	PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	
	String msg;
	msg=br.readLine();
	while(msg!="close")
			{
			p.println(msg);
			System.out.println(msg);
			msg=br.readLine();
			}
	
	}
	catch(Exception e)
		{
		}
	}
}