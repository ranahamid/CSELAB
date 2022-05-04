import java.io.*;
import java.util.*;
import java.net.*;

class server{
	public static void main (String[] args) 
		{
		try
			{
			ServerSocket c2=new ServerSocket(51000);
			System.out.println("Waiting at port 51000");
			Socket c1=c2.accept();
			PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
			BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
			
			String msg=br.readLine();
			System.out.println("File name is "+msg);
			FileWriter fw=new FileWriter("b.txt");
			PrintWriter pw=new PrintWriter(fw);
			
			
			while((msg=br.readLine())!=null)
				{
				pw.println(msg);
				System.out.println(msg);
				}
			
			System.out.println("File write successfully");
			pw.close();
			fw.close();
			c1.close();
			c2.close();
			}	
		catch(Exception e)
		{
		}
		}
}