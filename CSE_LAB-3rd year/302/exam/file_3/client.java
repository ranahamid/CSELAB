import java.util.*;
import java.io.*;
import java.net.*;

class server
{
	public static void main (String[] args) 
	{

	
	 try
	 	{
	 	 Socket c1=new Socket("127.0.0.1",51000);
		 PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
		 BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
		 String msg,command;
		 Scanner sc=new Scanner(System.in);
		 
		 System.out.println("type a file name");
		 
		 command=sc.nextLine();
		 
		 p.println(command);//send file name
		 
		 FileReader fr=new FileReader(command);
		 BufferedReader br1=new BufferedReader(fr);
		 while((msg=br1.readLine())!=null)
		 		{
		 		p.println(msg);
		 		System.out.println(msg);
		 		}
		 
		 
		 c1.close();
		 br.close();
		 p.close();
	 	}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}