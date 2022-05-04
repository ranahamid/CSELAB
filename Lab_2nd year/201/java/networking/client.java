import java.net.ServerSocket;
import java.net.Socket;
import java.io.PrintWriter;
import java.io.OutputStreamWriter;

class client
{
	public static void main (String[] args) 
		{
			try{
			
			Socket c2=new Socket("127.0.0.1",9999,true);
			PrintWriter p=new PrintWriter(new OutputStreamWriter(c2.getOutputStream()));
			p.println("Hello");
			p.flush();
				}
			catch(Exception e)
			{
				System.out.println("Exception caught");
			}
		}	
}