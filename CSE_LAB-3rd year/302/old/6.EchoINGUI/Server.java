import java.io.*;
import java.net.*;

public class Server
{
	public static void main (String[] args) 
	{
	try
	  {
	  ServerSocket c2=new ServerSocket(13);
	  System.out.println("Waiting...");
	  Socket c1=c2.accept();	
	  PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	 
	  //System.out.println("MSG from client is : "+br.readLine());
		// System.out.println("client connected" System.out.println("MSG "+(++kase)+" : from client is : "+st); System.out.println("MSG "+(++kase)+" : from client is : "+st); System.out.println("MSG "+(++kase)+" : from client is : "+st););
	 System.out.println("client connected");
	  String st,ST2;
	  int kase=0;
            while ((st = br.readLine()) != null) 
            {
            	 ST2="Server>> "+st;
            	  p.println(ST2);
            	//System.out.println(st);
                 System.out.println("MSG "+(++kase)+" : from client is : "+st);
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