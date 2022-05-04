import java.util.*;
import java.io.*;
import java.net.*;

class server
{
	public static void main (String[] args) 
	{

	
	 try
	 	{
	  ServerSocket c2=new ServerSocket(51000);
	  System.out.println("Waiting...");
	  Socket c1=c2.accept();	
	  PrintWriter p=new PrintWriter((c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  
		
		
		  String command;
		  command=br.readLine();
		System.out.println("File name is "+command);
		FileWriter fw=new FileWriter(command+"copy.txt");
		
		PrintWriter pw=new PrintWriter(fw);
		while((command=br.readLine())!=null)
			{
			pw.write(command);
			System.out.println(command);
			}
		
		 c1.close();
		 c2.close();
		 br.close();
		 p.close();
		 pw.close();
	 	}
	catch(Exception e)
		{
		e.printStackTrace();
		}
	}
}