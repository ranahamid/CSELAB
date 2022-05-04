import java.util.*;
import java.math.*;

class Main
{
	public static void main (String[] args) 
	{
		BigInteger p,a;
		int i,test;
		System.out.println("Enter p: ");
		Scanner sc=new Scanner(System.in);
		
		p=sc.nextBigInteger();
		if(p.equals(BigInteger.ZERO)||p.equals(BigInteger.ONE))
		{
			System.out.println(p+ " is not a prime number.");
			System.exit(0);
		}
		
		
		System.out.println("Enter test case : ");
		test=sc.nextInt();
		boolean  isprime=true;
		
		for(i=0;i<test;i++)
		{
			do
				{
				
				a=new BigInteger(p.bitLength(),new Random());
				}while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
			
			System.out.println("Test : "+(i+1)+" , a = "+a);
			BigInteger p_1=p.subtract(BigInteger.ONE);
			BigInteger p2=p_1.divide(BigInteger.valueOf(2));
			BigInteger ans=a.modPow(p2,p);
			if(!(ans.equals(BigInteger.ONE) || ans.equals(p.subtract(BigInteger.ONE))))
			{
				System.out.println(p+ " is not a prime number. ");
				isprime=false;
				break;
			}
			
		}
		if(isprime)
			System.out.println(p+ " is not prime is not more than 50 percent.");	
		
	}
}