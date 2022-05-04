import java.util.Scanner;
import java.io.*;
import java.net.*;

class client
{
	public static void main (String[] args) 
  {
  try {
	  Socket c1=new Socket("127.0.0.1",51000);
	  PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
	  BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
	  
	  Scanner sc=new Scanner(System.in);
	  System.out.println("Enter a file name");
	  String msg=sc.nextLine();
	  p.println(msg);
	  
	  FileReader fr=new FileReader(msg);
	  BufferedReader br1=new BufferedReader(fr);
	  String s;
	  s=br1.readLine();
	  while(s!=null)
	     {
	     p.println(s);
	     s=br1.readLine();
	     }
	  c1.close();
	  p.close();
	  br.close();
	  }
   catch(Exception e)
   	  {
      }
  }
}