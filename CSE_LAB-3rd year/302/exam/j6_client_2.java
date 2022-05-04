import java.util.Scanner;
import java.io.*;
import java.net.*;

class j6
{
	public static void main (String[] args) 
	{
	
	try
	{
	
	
	String msg;
	Scanner sc=new Scanner(System.in);
	
	msg=sc.nextLine();
	
	String st[]=msg.split(" ");
	
	String ms[]=new String[100];
	for(int i=0;i<st.length;i++)
	   ms[i]=new StringBuffer(st[i]).reverse().toString();
	for(int i=0;i<st.length;i++)
	
			System.out.print(ms[i]+" ");
	
	
	}
	catch(Exception e)
	  {
	  e.printStackTrace();
	  }
	
	}
}