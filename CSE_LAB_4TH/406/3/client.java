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
			System.out.println("Enter a text string to counting word:");
			String sen=sc.nextLine();
			
			System.out.println("____________________________");
			System.out.println("\nword             count ");
			System.out.println("____________________________");
			Map<String,Integer>m=calling.word_count(sen);
			
			Set<String>s=m.keySet();
   			TreeSet<String>t=new TreeSet<String>(s);
			for(String ts:t)
				  {
				   System.out.printf("%10s%10d\n",ts,m.get(ts));
				  }
			
			}
		catch(Exception e)
			{
			e.printStackTrace();
			}
	}    
    
}