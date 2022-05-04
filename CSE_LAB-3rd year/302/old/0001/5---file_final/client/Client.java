import java.io.*;
import java.net.*;
import java.util.*;
import java.io.FileReader;
import java.io.BufferedReader;


public class Client
{
	public static void main (String[] args) 
	{
	try
	  {
	  Socket c1=new Socket(InetAddress.getLocalHost(),9999);
	    
	  PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  

	  String st;
	  Scanner sc=new Scanner(System.in);
	  
	  System.out.println("type A File name");
	  st=sc.nextLine();
	  File is=new File(st);
	 
	  while(!is.exists())
	  {
	  System.out.println("No such file");	
	  System.out.println("type Another File name");
	  st=sc.nextLine();
	  is=new File(st);
	  }
	  
      p.println(st);
       
	  FileReader fr=new FileReader(st);

	 BufferedReader br1=new BufferedReader(fr);
	 
	// BufferedReader br1=new BufferedReader(new FileReader(st));
	 
	 String s;
	 System.out.println("File Read start! ");
	  
//	 while((s.compareToIgnoreCase("EOF"))!=0)

s=br1.readLine();

  while (s!= null) 
	 {
	     p.println(s);
	     s=br1.readLine();
	 }
	 System.out.println("File Read finish! "); 
	 br.close(); 
	 
	 /* while((st.compareToIgnoreCase("exit"))!=0)
	   {
	   p.println(st);	
	  
	   System.out.println("type exit to Exit the conversion");
	   st=sc.nextLine();
	   }
	  */
	   
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