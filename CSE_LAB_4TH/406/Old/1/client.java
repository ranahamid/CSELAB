import java.util.*;
import java.rmi.*;
import java.rmi.server.*;
class client
{
	public static void main (String[] args) 
	{
		try
		{
			serverInt calling=(serverInt)Naming.lookup("//localhost/server");
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter two number:");
			int a=sc.nextInt();
			int b=sc.nextInt();
			int c=calling.add(a,b);
			System.out.println(a+ "+" +b+"="+c);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}






/*
1.	Using RMI, implement the following: Read two integers from console of local machine, 
print the value of two integers in remote machine, calculate the sum in remote machine 
and print the result in local and remote machine. 
*/