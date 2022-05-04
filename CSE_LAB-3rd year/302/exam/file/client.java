import java.io.*;
import java.util.*;
import java.net.*;

class server{
	public static void main (String[] args) 
		{
		try
			{
		
			Socket c1=new Socket("127.0.0.1",51000);
			PrintWriter p=new PrintWriter(c1.getOutputStream(),true);
			BufferedReader br=new BufferedReader(new InputStreamReader(c1.getInputStream()));
			
			String msg;
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter file name");
			msg=sc.nextLine();
			p.println(msg);	
			
			FileReader fr=new FileReader(msg);
			BufferedReader br1=new BufferedReader(fr);
			
			String s=br1.readLine();
			while(s!=null)
				{
				p.println(s);
				System.out.println(s);
				s=br1.readLine();
				}
			
			System.out.println("File transfer successfully");
			
			c1.close();
			br.close();
			br1.close();
			}	
		catch(Exception e)
		{
		e.printStackTrace();
		}
		}
}