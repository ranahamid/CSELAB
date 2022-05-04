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
			String s=sc.nextLine();
			
			Vector<String>v=calling.spell_check(s);
			System.out.printf("%s",v);
		}
	catch(Exception e)
		{
		}
	}    
}