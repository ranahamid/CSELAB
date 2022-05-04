import java.util.*;
import java.io.*;
import java.net.*;

class server
{
	public static void main (String[] args) 
	{

	
	 try
	 	{
	  ServerSocket c2=new ServerSocket(51000);
	  System.out.println("Waiting...");
	  Socket c1=c2.accept();	
	  PrintWriter p=new PrintWriter((c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  
		
		 Calendar time =Calendar.getInstance();
		  String command;
		  command=br.readLine();
		 while(!(command.equalsIgnoreCase("close")))
	// while ((command = br.readLine()) != null)
		 	{
		 	if(command.equalsIgnoreCase("date"))
		 		p.printf("date is : %tA\n",time);
    	 	
		 	else
		 		p.println("Invalid command");
		 	 command=br.readLine();
		 	}
		 c1.close();
		 c2.close();
		 br.close();
		 p.close();
	 	}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}