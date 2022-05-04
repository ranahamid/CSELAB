import java.io.*;
import java.net.*;
import java.util.Calendar;
import java.util.Date;
import java.util.*;


public class Server
{
	public static void main (String[] args) 
	{
	try
	  {
	  ServerSocket c2=new ServerSocket(9);
	  System.out.println("Waiting...");
	  Socket c1=c2.accept();	
	  PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  
	  
	  String command;
	  
	  command=br.readLine();
	  
	  System.out.println("MSG from client is : "+command);
	  if(command.equalsIgnoreCase("date"))
	    {		
	    Date d=new Date();
	    p.println(d);
	    System.out.println("complete  the request of the client.");
	    }
	  else
	    {
	     p.println("Unknown command!");
	     System.out.println("complete  the request of the client.");
	    }
	  p.close();
	  br.close();
	  c1.close();		
      }
    catch(Exception e)
      {
       System.out.println("Exception caught");	
      }  
 	
    }
}