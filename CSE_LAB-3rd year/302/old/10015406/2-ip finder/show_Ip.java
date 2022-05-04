import java.net.InetAddress;
import java.util.Scanner;
import java.net.*;

class show_Ip
{
    public static void main(String args[])
    {
    	
    	String host;
        Scanner input=new Scanner(System.in);
        System.out.println("Type a Host name with protocol like http://google.com...");
        host=input.next();
        System.out.println("Host name is : "+host);
        try{
        
        	InetAddress address=InetAddress.getByName(host);
        	System.out.println("IP address is : "+address);
           }
           
        catch(UnknownHostException  e)
        	 {
        	 System.out.println("ERROR!");
	         System.out.println("Unknown Host");
	         }
	    catch(SecurityException e)
	    	{
	    	System.out.println("ERROR!");
	    	System.out.println("Security exception");	
	    	}
	    	
    }
}