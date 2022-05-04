import java.util.*;
import java.rmi.*;
import java.rmi.server.*;




public class client 
{
public static void main (String[] args) 
	{
	try 
		{
			serverInt calling=(serverInt) Naming.lookup("//localhost/server");
			
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter sentence : ");
			String ss=sc.nextLine();
			
			Map<String,Integer>m=calling.count_word(ss);
			
			Set<String>se=m.keySet();
			TreeSet<String>ts=new TreeSet<>(se);
			System.out.println();
			for(String s:ts)
			{
				System.out.printf("%10s%10d",s,m.get(s));
			}
			
			
		}
	catch(Exception e)
		{
		}
	}    
}