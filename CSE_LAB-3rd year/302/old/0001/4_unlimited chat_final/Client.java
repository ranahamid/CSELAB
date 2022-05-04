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
	  
	  System.out.println("type exit to Exit the conversion");
	  int kase=0;
	  st=sc.nextLine();
	  

	  
	  while((st.compareToIgnoreCase("exit"))!=0)
	   {
	   p.println(st);	
	   System.out.println("MSG "+(++kase)+" : from server is : "+st);
	   System.out.println("type exit to Exit the conversion");
	   st=sc.nextLine();
	   }
	  p.println("Connection terminated.Thank you! "); 
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