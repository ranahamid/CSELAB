import java.io.*;
import java.net.*;
import java.util.Calendar;
import java.util.Date;
import java.util.*;


public class Multi_Server
{ 
	public static  ServerSocket c2;

	public static void main (String[] args) 
	{
	try
	  {
	  c2=new ServerSocket(13);
	  System.out.println("Waiting...");
	  int kase=0;
	 while(true)
	 {
	 Socket c1=c2.accept();	
	 System.out.println("Client "+(++kase)+" connected.");
	 myclass th=new myclass(c1,kase);
	 th.start();
	 }
		
      }
    catch(Exception e)
      {
       System.out.println("Exception caught");	
      }  
 	
    }
}



class myclass extends Thread
{
	Socket c1;
	public String command;
	Calendar dateTime=Calendar.getInstance();
	int clientNumber;
	myclass(Socket c,int n)
		{
		c1=c;
		clientNumber=n;
		}
	public void run()
	{
	try
	{
	
		PrintWriter p=new PrintWriter((c1.getOutputStream(),true);
		BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));


	  	int kase=0;
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
            
     System.out.println("Client "+clientNumber+" exit!");
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