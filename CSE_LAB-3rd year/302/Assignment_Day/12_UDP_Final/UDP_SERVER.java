import java.io.*;
import java.net.*;

public class UDP_SERVER
{
	public static DatagramSocket dataSocket;
	
	public static void main (String[] args) 
	{
	try
		{
		 dataSocket=new DatagramSocket(1234);
		 int kase=0;
		do
			{
			String msg,outMsg;
			System.out.println("Waiting...");
			DatagramPacket inpacket,outpacket;
			byte[] buffer=new byte[256];
			inpacket=new DatagramPacket(buffer,buffer.length);
			dataSocket.receive(inpacket);
			
			
			InetAddress clientAddress=inpacket.getAddress();
			int port=inpacket.getPort();
			
			msg=new String(inpacket.getData(),0,inpacket.getLength());
			System.out.println("MSG from client is : "+msg);
			
			outMsg="MSG : "+(++kase)+msg;
			outpacket=new DatagramPacket(outMsg.getBytes(),outMsg.length(),clientAddress,port);
			dataSocket.send(outpacket);
			}while(true);
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