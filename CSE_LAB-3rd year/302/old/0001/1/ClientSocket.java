import java.io.*;
import java.net.*;


public class ClientSocket 
{
	  public static void main (String[] args) 
	{  
    try
    {
    
    Socket c1=new Socket("127.0.0.1",9999,true);
    BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
    PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()));
    p.println("Hello");
    p.flush();
    System.out.println("msg from server : "+br.readLine());
    }
    catch(Exception e)
    {
    	System.out.println("Exception caught");
    }
    } 
}