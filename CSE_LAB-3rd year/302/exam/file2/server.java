import java.util.Scanner;
import java.io.*;
import java.net.*;

class server
{
	public static void main (String[] args) 
  {
  try {
	 	ServerSocket c2=new ServerSocket(51000);
	 	System.out.println("waiting");
	  Socket c1=c2.accept();
	  
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  
	  String msg="b.txt";
	 
	   
	  FileWriter fw=new FileWriter(msg);
	  PrintWriter pw=new PrintWriter(fw);
	  
	  String s;
	  s=br.readLine();
	  while(s!=null)
	     {
	     pw.println(s);
	     s=br.readLine();
	     }
	  c1.close();
	  c2.close();
	  pw.close();
	  
	  }
   catch(Exception e)
   	  {
      }
  }
}