import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;

class ServerSocket1 
{
public static void main (String[] args) throws IOException
  {
  	try
  		{
  	    ServerSocket c2=new ServerSocket(9999);
  	    System.out.println("Waiting for connection");
  	    Socket c1=c2.accept();
  	    BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
  	    PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
  	    System.out.println("MSG from client is : "+br.readLine());
  	    p.println("Thnx");
  	    p.close();
  	    br.close();
  	    }
   catch(Exception e)
       {
        System.out.println("Exception caught");
       }
  } 
  	    
}