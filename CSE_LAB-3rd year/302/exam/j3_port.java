import java.io.*;
import java.net.*;
import java.util.*;

class j2
{

	public static void main (String[] args) 
	{
	Scanner sc=new Scanner(System.in);
	

	
	String host="localhost";
	 for(int i=0;i<100;i++)
	 {
	  	 
	   try
	   {
	   Socket c1=new Socket(host,i);
	   System.out.println("Port open is : "+i);
	   }
	   catch(Exception e)
	   {
	   }
	}
	
	}
}


/**
 file:///c://j1.java
 **/