import java.net.*;
import java.io.*;
import java.util.Scanner;

class Smtp_Compose 
{
 
public static void main(String[] args) 
{
 try{
String username="admin",rcptname="k",sysadd="localhost";    
	InetAddress address=InetAddress.getLocalHost();
	Socket smail=new Socket(address,25);
	BufferedReader br=new BufferedReader(new InputStreamReader(smail.getInputStream()));
//	PrintWriter pr=new PrintWriter(new OutputStreamWriter(smail.getOutputStream(),true));
	PrintWriter pr=new PrintWriter(smail.getOutputStream(),true);
	System.out.println(br.readLine());
	pr.println("helo localhost");
	

	
	System.out.println(br.readLine());
	pr.println("mail from :<"+username+"@"+sysadd+">");//error may be
	
	
	System.out.println(br.readLine());
	pr.println("rcpt to :<"+rcptname+"@"+sysadd+">");//error may be
	
	System.out.println(br.readLine());
	pr.println("data");
	
	System.out.println(br.readLine());
	pr.println("Rana hamid");
	pr.println(" 2 a test mail");
	pr.println(" 33 a test mail");
	pr.println(" This a test mail");
	pr.println(" 2 a test mail");
	pr.println(" 33 a test mail");
	
	pr.println("EOF");
	pr.println(".");
	
	
	System.out.println(br.readLine());
	pr.println("quit");
	System.out.println(br.readLine());    
    }
catch(Exception e)
	{
	System.out.println("Exception Caught!");
	}
}  
}
