import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.io.*;

public class server 
{
public static void main (String[] args) throws Exception
{
try{
	ServerSocket c2=new ServerSocket(9999);
	System.out.println("Waiting");
	Socket c=c2.accept();
	BufferedReader br=new BufferedReader(new InputStreamReader(c.getInputStream()));
	String st=br.readLine();
	System.out.println("MSG is : "+st);	
	PrintWriter p=new PrintWriter(c.getOutputStream(),true);
	p.println("Thnx");
	}
	catch(Exception e)
	{
		System.out.println("Exception");
	}
}
  
    
}