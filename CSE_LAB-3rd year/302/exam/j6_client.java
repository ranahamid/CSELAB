import java.util.Scanner;
import java.io.*;
import java.net.*;

class j6
{
	public static void main (String[] args) 
	{
	
	try
	{
	
	Socket c1=new Socket("localhost",9202);	
	PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	
	
	String msg;
	Scanner sc=new Scanner(System.in);
	
	msg=sc.nextLine();
	
	while(!(msg.equalsIgnoreCase("close")))
			{	
			p.println(msg);
			System.out.println(br.readLine());
			msg=sc.nextLine();
			}	
	
	}
	catch(Exception e)
	  {
	  e.printStackTrace();
	  }
	
	}
}