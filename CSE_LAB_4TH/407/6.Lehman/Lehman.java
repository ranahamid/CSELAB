import java.util.*;
import java.math.BigInteger;

class Main
{
	public static void main (String[] args) 
	{
		System.out.print("Enter p: ");
		Scanner sc=new Scanner(System.in);
		BigInteger p=sc.nextBigInteger();
		
		if(p.equals(BigInteger.ZERO)|| p.equals(BigInteger.ONE))
		{
				System.out.print(p+" is not a prime number");
				System.exit(0);
		}
		
		int t;
		System.out.print("Enter test: ");
		t=sc.nextInt();
		int is_prime=1;
		for(int i=0;i<t;i++)
		{
			BigInteger a;
			do{
				a=new BigInteger(p.bitLength(),new Random());
			}while( (a.compareTo(p)>=0)|| (a.equals(BigInteger.ZERO)) ); 
				
		 BigInteger p_1=p.subtract(BigInteger.ONE);
		 BigInteger exp=p_1.divide(BigInteger.valueOf(2));
		 BigInteger result=a.modPow(exp,p);
		 if(! (result.equals(BigInteger.ONE) || result.equals(p.subtract(BigInteger.ONE)) ) )
		 {
		 	System.out.print(p+" is not a prime number");
		    is_prime=0;
		    System.exit(0);
		 }  
		}
	if(is_prime==1)
			System.out.print(p+" may be a prime number");	
	}
}