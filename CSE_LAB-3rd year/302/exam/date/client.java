import java.util.*;
import java.io.*;
import java.net.*;

class server
{
	public static void main (String[] args) 
	{

	
	 try
	 	{
	 	 Socket c1=new Socket("127.0.0.1",51000);
		 PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
		 BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
		 String msg,command;
		 Scanner sc=new Scanner(System.in);
		 command=sc.nextLine();
		 
		 while(!(command.equalsIgnoreCase("close")))
		 	{
		 	p.println(command);
		 	msg=br.readLine();
		 	System.out.println(msg);
		 	command=sc.nextLine();
		 	}
		 c1.close();
		 br.close();
		 p.close();
	 	}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}