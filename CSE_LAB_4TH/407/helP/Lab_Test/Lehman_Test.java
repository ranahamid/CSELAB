import java.util.Scanner;
import java.math.BigInteger;
import java.util.Random;


public class Lehman_Test
{
public static void main (String[] args) 
	{		
	Scanner sc=new Scanner(System.in);
	BigInteger p,ans,p_1,exp;
	System.out.println("Enter p");
	p=sc.nextBigInteger();
	if(p.equals(BigInteger.ZERO)||p.equals(BigInteger.ONE))
	{
		System.out.println("P is not a prime number");
		System.exit(0);
	}
	System.out.println("Enter number of test to be performed");
	int test=sc.nextInt(),i;
	int is_prime=1;
	
	BigInteger a;
	for(i=1;i<=test;i++)
		{
			do{
				a=new BigInteger(p.bitLength(),new Random());
			  }while(a.compareTo(p)>=0 || a.compareTo(BigInteger.ZERO)==0);
			System.out.println("Case "+i+" a is  : "+a);
			
			p_1=p.subtract(BigInteger.ONE);  	
			exp=p_1.divide(BigInteger.valueOf(2));
			ans=a.modPow(exp,p);
			if(!(ans.equals(BigInteger.ONE)||ans.equals(p.subtract(BigInteger.ONE))))
			{
				System.out.println(p+" is not prime number.");
				is_prime=0;
				break;
			}
		}
	if(is_prime==1)
		{
		System.out.println(p+" probably a prime number.");
		}
		
	else
		{
		System.out.println(p+" is not a prime number.");
		}
	}	   
}