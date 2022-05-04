import java.net.Socket;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.*;

public class Client 
{
	public static void main (String[] args) 
		{

	try{
	
   Socket c1=new Socket("127.0.0.1",9999,true);
   PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()) );
   p.println("Hello ");
   p.flush();
   BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));	
   System.out.println("Msg is : "+br.readLine());
   }
	catch(Exception e)
		{
		System.out.println("exception caught");
	    }
}
}

