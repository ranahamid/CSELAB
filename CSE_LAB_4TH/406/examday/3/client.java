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
			System.out.println("____________________________________");
			System.out.println("FACT Compute factorial of N");
			System.out.println("FIB Compute Nth Fibonacci Number");
			System.out.println("FIBLIST Generate the list of all Fibonacci Number between 1 to N");
			System.out.println("PRIME Compute Nth Prime number");
			System.out.println("PRIMELIST Generate the list of all prime number between 1 to N");
			System.out.println("FACTOR Generate the list of Prime factors for integer value N");
			System.out.println("____________________________________");
			
			System.out.println("Enter command : ");
			String command=sc.nextLine();
			System.out.println("Enter N : ");
			int n=sc.nextInt();
			
			//fact
			if(command.equalsIgnoreCase("fact"))
			{
				int nn=calling.fact(n);
				System.out.println("Fact of "+n+" is : "+nn);
			}
			
			//FIB
			if(command.equalsIgnoreCase("FIB"))
				{
				int nn=calling.fib(n);
				System.out.println(n+" th Fib is : "+nn);
				}
			//fiblist
			if(command.equalsIgnoreCase("fiblist"))
			{
				int[] s=calling.fiblist(n);
				for(int nn:s)
				{
					if(nn!=0)
					{
						System.out.println(nn+", ");	
					}
					else if(nn==0)
					{
						break;
					}
				}
			}
			
				
			//PRIME 	
			if(command.equalsIgnoreCase("PRIME"))
				{
				
				int nn=calling.prime(n);
				if(nn!=0)
					System.out.println(n+" th prime is : "+nn);
				else
					System.out.println("Can't find the prime.");
				}
				
				
				//PRIMELIST	
			if(command.equalsIgnoreCase("PRIMELIST"))
				{
			
				 int primeList[]=calling.primelist(n);
				 for(int num:primeList)
					 {
					 	if(num!=0)
					 	{
					 	System.out.print(num+", ");
					 	}
					 	else if(num==0)
					 	{
					 	break;
					 	}
					 }
				 
				}
				
				
		//FACTOR 		
			if(command.equalsIgnoreCase("FACTOR"))
				{
				
				List<Integer>list=calling.factor(n);
				System.out.println(list);
				}	
		}
	catch(Exception e)
		{
		}
	}    
}