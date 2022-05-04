import java.net.InetAddress;
import java.util.Scanner;

class localHost_Ip
{
    public static void main(String args[])
    {
    	
    	String host;
        Scanner input=new Scanner(System.in);
       
        System.out.println("Local Host IP: ");
        try{
        
        	InetAddress address=InetAddress.getLocalHost();
        	System.out.println("IP address is : "+address);
           }
        catch(Exception  e)
        	 {
	         System.out.println("Unknown Host");
	         }
	      
    }
}