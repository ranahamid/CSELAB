import java.io.*;
import java.net.*;
import java.util.*;

public class Client implements Runnable
{
private  static Socket c1;
private  static PrintWriter p;
private  static BufferedReader br;
private  static Scanner sc;
private  static boolean close=false;
private  static String	host="127.0.0.1";
private  static int port=2222;

	public static void main (String[] args) 
	{
	try
	  {
	   System.out.println("Conncecting to "+host+"in "+port+"port");
	   c1=new Socket(host,port);
	   p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	   br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  }
	catch(Exception e)
      	{
      	System.out.println("Exception caught");	
      	} 
	   

	  
	   sc=new Scanner(System.in);
  	  while(p!=null & br!=null & c1!=null)
  	  	{
  	  		
  	  		try{
  	  			new Thread(new Client()).start();
  	  			while(!close)
  	  				p.println(sc.nextLine());
  	  			c1.close();	
  	  			p.close();
	  			br.close();
	  				
  	  		   }
  	  		catch(Exception e)
      		{
      		 System.out.println("Exception caught");	
      		} 
  	  	}
    }
  public void run()
  {
  String responseLine;
  try
  	{
  	while((responseLine=br.readLine())!=null)
  		{
  		System.out.println(responseLine);
    //	if(responseLine.equalsIgnoreCase("bye"))
  	if (responseLine.indexOf("*** Bye") != -1) 
  			 //break;
  			 System.exit(00);
 		} 	
  		close=true;
  		
  	}
  	catch(Exception e)
  		{
  		}
  }
}