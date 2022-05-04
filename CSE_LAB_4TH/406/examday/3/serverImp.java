import java.util.*;
import java.rmi.*;
import java.rmi.server.*;


public class serverImp extends UnicastRemoteObject implements serverInt
{

    public serverImp() throws RemoteException
    {
    }
 	
 	
 	public int fact(int n) throws RemoteException
 	{
 		int ans=1;
 		for(int i=n;i>=2;i--)
 		{
 		ans=ans*i; 		
 		}
 		return ans;
 	}
 	///
	public int fib(int n) throws RemoteException
	{
		int fib[]=new int[1000];
		fib[1]=1;
		fib[2]=1;
		for(int i=3;i<=n;i++)
		{
			fib[i]=fib[i-1]+fib[i-2];
		}
		return fib[n];
		
	}
	
	public int[] fiblist(int n) throws RemoteException
	{
		int fib[]=new int[1000];
		fib[0]=1;
		fib[1]=1;
		for(int i=2;;i++)
		{
			fib[i]=fib[i-1]+fib[i-2];
			if(fib[i]>n)
			{
				fib[i]=0;
				break;
			}
		}
		
		return fib;
	}
	public int prime(int n) throws RemoteException
	{
		int primes[]=new int[1000];
		int index=0,i,j;
		
		for(i=2;i<=10000;i++)
		{
			boolean valid=true;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					valid=false;
					break;
				}
			}
			if(valid==true)
			{
				primes[index++]=i;
				if(index==n)
				{
					return primes[index-1];
				}
			}
		}
		return 0;
	}
	
	public int[] primelist(int n) throws RemoteException
	{
		System.out.println("in primelist");
	int primes[]=new int[1000];
		int index=0,i,j;
		
		for(i=2;i<=1000;i++)
		{
			boolean valid=true;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					valid=false;
					break;
				}
			}
			if(valid==true)
			{
				primes[index++]=i;
				if(primes[index-1]>n)
				{
					primes[index-1]=0;
					//break;
					return primes;
				}
			}
		}
		return 0;
	
	}
	
	public List<Integer> factor(int n) throws RemoteException
	{
		List<Integer>list1=new ArrayList<Integer>();
		for(int i=2;i<=n;)
		{
			if(n%i==0)
			{
				list1.add(i);
				n=n/i;
			}
			else
			{
				i++;
			}
		}
		return list1;
	}
}