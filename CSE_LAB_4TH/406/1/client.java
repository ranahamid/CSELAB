import java.util.*;
import java.rmi.*;

public class client 
{
public static void main (String[] args) 
	{
		try
			{
			serverInt calling=(serverInt)Naming.lookup("//localhost/server");
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter a sentence to spell check");
			String sen=sc.nextLine();
			
			Vector<String>v=calling.spell_check(sen);
			System.out.println("The Error List is : ");			
			System.out.printf("%s",v);
			}
		catch(Exception e)
			{
			e.printStackTrace();
			}
	}    
    
}