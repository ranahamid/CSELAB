import java.util.*;
import java.io.*;
import java.net.*;

class j6
{
	public static void main (String[] args) 
	{
	try
	{
	ServerSocket c2=new ServerSocket(9202);
	System.out.println("Waiting");
	Socket c1=c2.accept();
	
	PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	
	String msg;

	Calendar c=Calendar.getInstance();
	msg=br.readLine();
	while(!(msg.equalsIgnoreCase("close")))
	
			{
			if(msg.equalsIgnoreCase("date"))
				  p.printf("Server>> %tF\n",c);
			else	if(msg.equalsIgnoreCase("day"))
				  p.printf("Server>> %tA\n",c);
		else		  	if(msg.equalsIgnoreCase("month"))
				  p.printf("Server>> %tB\n",c);
			else	  	if(msg.equalsIgnoreCase("year"))
				  p.printf("Server>> %tY\n",c);
				else  	  	if(msg.equalsIgnoreCase("Time"))
				  p.printf("Server>> %tT\n",c);
				  
				  
			else 
				  p.println("Unknown command");
			System.out.println(msg);
				msg=br.readLine();
			}
	
	}
	catch(Exception e)
		{
		}
	}
}