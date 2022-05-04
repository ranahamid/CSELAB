import java.util.*;
import java.io.*;
import java.rmi.*;
import java.rmi.server.*;


public class client 
{
public static void main (String[] args) 
	{
		try
			{
				serverInt calling=(serverInt)Naming.lookup("//localhost/server");
				System.out.println("Enter words to counts : ");
				Scanner sc=new Scanner(System.in);
				String words=sc.nextLine();
				Map<String,Integer>m=calling.word_count(words);
				Set<String>s=m.keySet();
				TreeSet<String>tr=new TreeSet<String>(s);
				for(String w:tr)
				{
					System.out.printf("%10s%10d",w,m.get(w));
						System.out.println();
				}
				
			}
		catch(Exception e)
		{
			e.printStackTrace();
		}	
		
	}
}