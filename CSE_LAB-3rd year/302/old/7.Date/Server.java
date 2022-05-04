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
	  Calendar dateTime=Calendar.getInstance();
	  
	  String command;
	  
 while ((command = br.readLine()) != null) 	
 {
   
	  System.out.println("MSG from client is : "+command);
	  if(command.equalsIgnoreCase("date"))
	    {		
	    p.printf("Server>> %tF\n",dateTime);
	    }
	  else  if(command.equalsIgnoreCase("year"))
	    {		
	    p.printf("Server>> %tY\n",dateTime);
	    }
	    
	  else  if(command.equalsIgnoreCase("date"))
	    {		
	    p.printf("Server>> %tc\n",dateTime);
	    }
	   else  if(command.equalsIgnoreCase("month"))
	    {		
	    p.printf("Server>> %tb\n",dateTime);
	    }
	   else  if(command.equalsIgnoreCase("time"))
	    {		
	    p.printf("Server>> %tT\n",dateTime);
	    }
	   
	   else  if(command.equalsIgnoreCase("time"))
	    {		
	    p.printf("Server>> %tT\n",dateTime);
	    }
	   
	   else  if(command.equalsIgnoreCase("day"))
	    {		
	    p.printf("Server>> %tA\n",dateTime);
	    }
	   
	 
	  else
	    {
	     p.println("Server>> Unknown command!");
	     System.out.println("complete  the request of the client.");
	    }
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