import java.io.*;
import java.net.*;

public class Server
{
	public static void main (String[] args) 
	{
	try
	  {
	  ServerSocket c2=new ServerSocket(9999);
	  System.out.println("Waiting...");
	  Socket c1=c2.accept();	
	  PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  System.out.println("MSG from client is : "+br.readLine());

	  String st;
            while ((st = br.readLine()) != null) 
            {
            	p.println(st);
            	System.out.println(st);
                
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