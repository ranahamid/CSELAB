import java.io.*;
import java.net.*;
import java.util.*;
public class Client
{
	public static void main (String[] args) 
	{
	try
	  {
	  Socket c1=new Socket("127.0.0.1",9999);
	 
	  PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  String st;
	  Scanner sc=new Scanner(System.in);
	  System.out.println("type a command");
	  st=sc.nextLine();
	  p.println(st);
	  p.flush();
	  System.out.println("MSG from Server is : "+br.readLine());
	  

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