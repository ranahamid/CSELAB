import java.io.*;
import java.net.*;

public class Server
{ 
	public static  ServerSocket c2;
	public static  Socket c1;
	static myclass[] t=new myclass[10];
	public static int port=2222;
	
	public static void main (String[] args) 
	{
	try
	  {
	  c2=new ServerSocket(port);
	  System.out.println("Waiting...");
	  }
	catch(Exception e)
      {
       System.out.println("Exception caught");	
      } 
      	 
   while(true)
	 {
	 try{
	 	c1=c2.accept();	
	 
	// myclass th=new myclass(c1,kase);
//	 th.start();
	 for(int i=0;i<10;i++)
	 		{
	 		if(t[i]==null)
	 			{
	 			(t[i]=new myclass(c1,t)).start();
	 			break;
	 			}
	 		}
	 
	 	}
	  catch(Exception e)
      {
       System.out.println("Exception caught");	
      } 
	}
		
      
    
 	
    }
}



class myclass extends Thread
{
	Socket c1;
	int i;
	myclass t[];
	PrintWriter p;
	BufferedReader br;
	
	myclass(Socket c,myclass[] my)
		{
		c1=c;
		t=my;
		}
	public void run()
	{
	String name,msg;
	try
	{
	
		 p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
		 br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	
		 p.println("Enter your Name");
		 name=br.readLine();
		 p.println("Welcome "+name+" to Group Chat \nTo leave type /quit.");
		 for(i=0;i<10;i++)
		 	{
		 	if(t[i]!=null & t[i]!=this)
		 	t[i].p.println("A new user "+name+" entered the Group chat");
		 	}	
	  while(true)
	  		{
	  		msg=br.readLine();
	  		if(msg.equalsIgnoreCase("/quit"))
	  			break;
	  		for(i=0;i<10;i++)
	  			{
	  			if(t[i]!=null)
	  				t[i].p.println("<"+name+"> "+msg);
	  			}
	  		
	  		}
	 for(i=0;i<10;i++)
	 	{
	 	if(t[i]!=null & t[i]!=this)
	 		 t[i].p.println(name+" leave the conversation");
	 	}
		p.println("*** Bye "+name+" ***");
	  //	p.println("bye");

	for(i=0;i<10;i++)
		{
		if(t[i]==this)
			t[i]=null;
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