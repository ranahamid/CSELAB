import java.util.*;
import java.net.*;


public class PortScanner 
{

    public static void main(String[] args) 
    {
    String hostName;
    int i,N=1000;
    Scanner sc=new Scanner(System.in);
    System.out.println("Type Host name: ");
    hostName=sc.nextLine();
    try
     {
  	   InetAddress StringAddress=InetAddress.getByName(hostName);
      // System.out.println("IP address is : "+StringAddress);
       System.out.println("IP address is : "+StringAddress);
       for(i=100;i<=N;i++)
      	{
      	   try{
      	      Socket c1=new Socket(hostName,i);
      	      System.out.println("There is a port in : "+i);
      		  }
           catch(Exception e)
            {
            }
     	}
       System.out.println("Finish Scaning!"); 
      }
      catch(Exception e1)
      {
      	System.out.println("Could not find host!"); 	
      }
    
    }
    
}
