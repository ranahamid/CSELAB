import java.net.*;
import java.io.*;
import java.util.Scanner;


public class Smtp_Check 
{
    public static void main(String[] args) 
    {
    try
    	{
String username="rana",sysadd="localhost",password="1234";
	
    InetAddress address=InetAddress.getLocalHost();
	Socket smail=new Socket(address,110);
	BufferedReader br=new BufferedReader(new InputStreamReader(smail.getInputStream()));
//	PrintWriter pr=new PrintWriter(new OutputStreamWriter(smail.getOutputStream(),true));
	PrintWriter pr=new PrintWriter(smail.getOutputStream(),true);
	System.out.println(br.readLine());
	pr.println("user "+username);
	

	
	System.out.println(br.readLine());
	
	pr.println("pass "+password);//error may be
	
	
	System.out.println(br.readLine());
	pr.println("list");//error may be
	
	int listnumber=1;
	System.out.println(br.readLine());
	pr.println("retr "+listnumber);
	
	String st="";
	//System.out.println(br.readLine());
	st = br.readLine();
//	 while(((st = br.readLine()).compareToIgnoreCase(".\n"))!=0)
//	   while ((st = br.readLine())!= null)  
	 while((st.compareToIgnoreCase("EOF"))!=0)
            {
                 System.out.println(st);
                 st = br.readLine();
            }

	System.out.println(br.readLine()); 	
	pr.println("quit");    		
    	}
    catch(Exception e)
	{
	System.out.println("Exception Caught!");
	}
    }
}
