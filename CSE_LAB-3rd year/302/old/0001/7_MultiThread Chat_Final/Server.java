import java.io.*;
import java.net.*;

public class Server
{ 
	public static  ServerSocket c2;
	public static void main (String[] args) 
	{
	try
	  {
	  c2=new ServerSocket(12000);
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
	
		PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
		BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	

	  	String st;
	  	int kase=0;
            while ((st = br.readLine()) != null) 
            {
            	p.println(st);
               System.out.println("MSG "+(++kase)+" : from client "+ clientNumber+" is : "+st);
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