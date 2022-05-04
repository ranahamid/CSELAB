import java.io.*;
import java.net.*;
import java.util.Scanner;
public class UDP_CLIENT
{
	public static DatagramSocket dataSocket;
	
	public static void main (String[] args) 
	{
	try
		{
		 dataSocket=new DatagramSocket();
		 int kase=0;
		 String msg,outMsg;
		do
			{
			DatagramPacket inpacket,outpacket;
			byte[] buffer=new byte[256];
			Scanner sc=new Scanner(System.in);
			
			System.out.println("Type msg");
			outMsg=sc.nextLine();
			if(!outMsg.equalsIgnoreCase("close"))
			
			{
				InetAddress host=InetAddress.getLocalHost();
				outpacket=new DatagramPacket(outMsg.getBytes(),outMsg.length(),host,1234);
				dataSocket.send(outpacket);
			
				inpacket=new DatagramPacket(buffer,buffer.length);
				dataSocket.receive(inpacket);

				msg=new String(inpacket.getData(),0,inpacket.getLength());
				System.out.println("MSG from Server is : "+msg);
				System.out.println("Type msg");
				outMsg=sc.nextLine();
			}
			}while(!outMsg.equalsIgnoreCase("close"));
		}
	catch(IOException e)
		{
		System.out.println("Exception Caught");
		}
	finally
		{
		System.out.println("Connection Closed...");
		dataSocket.close();
		}
	}
}