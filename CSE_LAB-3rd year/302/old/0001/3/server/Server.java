import java.io.*;
import java.net.*;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.*;

public class Server
{
	public static void main (String[] args) 
	{
	try
	  {
	  ServerSocket c2=new ServerSocket(9999);
	  System.out.println("Waiting...");
	  Socket c1=c2.accept();	
	 // PrintWriter p=new PrintWriter(new OutputStreamWriter(c1.getOutputStream()),true);
	 // BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	 PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	 Scanner br=new Scanner(c1.getInputStream());
	 
	 
	 String filename=br.nextLine();
	 System.out.println("File Name from client is : "+filename);
	 p.println("File name is Ok!");
	  
	  
	FileWriter file=new FileWriter("b.txt");
	PrintWriter pw=new PrintWriter(file);

 
	  String st;
	 System.out.println("MSG  : from client is : ");
            while ((st = br.nextLine()) != null) 
            {

                 System.out.println(st);
                 pw.println(st);
                 
            }
      pw.close();
      
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