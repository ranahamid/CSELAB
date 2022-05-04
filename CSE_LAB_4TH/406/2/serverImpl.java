import java.rmi.*;
import java.util.*;
import java.rmi.server.*;

class  serverImpl extends UnicastRemoteObject implements serverInt
{

	


	public  serverImpl()throws RemoteException
		{
		
		}
	
	
		
	//Fact	
	public int Fact(int n) throws RemoteException
		{
			int result=1;
			for(int i=n;i>=2;i--)
			{
				result=result*i;
			}
			return result;
		}
		
		
		
		
		
	//Fib	
    public int Fib(int n) throws RemoteException
    	{
    	 int fib[]=new int[100];
 		 fib[0]=1;
 		 fib[1]=1;
 	
 		 int i;
 		 for(i=2;i<n;i++)
 		 	{
 		 	fib[i]=fib[i-2]+fib[i-1];
 		 	}
 		 System.out.println(fib[i-1]);
 		 return fib[i-1];	
 		 	
    	}
    
    
    
    	
    //FibList
 	
 		
 	public int[] FibList(int n) throws RemoteException
 		{
 	     
 	     
 		 int fib[]=new int[100];
 		 fib[0]=1;
 		 fib[1]=1;
 	
 		 int i;
 		 for(i=2;i<n;i++)
 		 	{
 		 	fib[i]=fib[i-2]+fib[i-1];
			if(fib[i]>n)
			{
				fib[i]=0;
				break;
			}
 		 	}
 		   
 		 	 
 		 return fib;    
 		}
 			
 		
 		
 		
 	//Prime	
 	public int Prime(int n) throws RemoteException
 		{
 			int primeList[]=new int[1000];
			int index=0;
			int max=10000;
			
			 for(int i=2;i<=max;i++)
			 {
			 	boolean temp=true;
			 	for(int j=2;j<i;j++) //j<i;
			 	{
			 	    
			 		if(i%j==0)
			 		{
			 			temp=false;
			 			break;
			 		}
			 	}
			 	if(temp)
			 		{
			 			primeList[index++]=i;
			 			if(index==n)
			 			{
			 				return primeList[index-1];
			 			}
			 		}
			 }
			 
			 return 0;
 		}
 		
 		
 		
 		
 		
 	
 	
 		
 	//primelist	
 		
 	public int[] PrimeList(int n) throws RemoteException
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
					break;
					return primes;
				}
			}
		}
		return primes;
 		}
 		
 		
 		
 		
 		
 		
 		//factor
 	public List<Integer> Factor(int n) throws RemoteException
 		{
 			//For negative integers, multiply by -1 to make it positive again.
			//For -1,0, and 1, no prime factor. (by definition...)
			
 		List<Integer>list1=new ArrayList<Integer>();
 		if(n==-1 || n==1 || n==0)
 			{
 				list1.add(0);
 				return list1;
 			}
 		if(n<0)
 			{
 			n=n*-1;
 			}
 			
 			
 		for(int i=2;i<=n;)
 		{
 			if(n%i==0)
 			{
 				n=n/i;
 				list1.add(i);
 			}
 			else
 			{
 				i++;
 			}
 		
 		}
 		
 		//if sir want duplicate then return list1 
 		
 		//return list1
 		
 		//or if sir want duplicate to be removed then return list2
 		
 		Set<Integer>s=new HashSet<Integer>(list1);
 		List<Integer>list2=new ArrayList<Integer>(s);
 		return list2;
 		}
	
}