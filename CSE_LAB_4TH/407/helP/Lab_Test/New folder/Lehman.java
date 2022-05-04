import java.util.Scanner;
import java.math.BigInteger;
import java.util.Random;

class lenhman
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter p: ");
		BigInteger p=sc.nextBigInteger();
		System.out.println("Enter test: ");
		int test=sc.nextInt();
		BigInteger a;
		
		int i,end=0;
		for(i=1;i<=test;i++)
		{
		do
			{
				a=new BigInteger(p.bitLength(),new Random());
			}while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
			
		System.out.println("Case  "+i+" a is : "+a);
		
		BigInteger p_1=p.subtract(BigInteger.ONE);
		BigInteger p_1Div_2=p.divide(BigInteger.valueOf(2));
		BigInteger ans=a.modPow(p_1Div_2,p);
		if(! (ans.equals(BigInteger.ONE) || ans.equals(p.subtract(BigInteger.ONE))) )
		{
			System.out.println(p+" is definately not prime");
			end=1;
			break;
		}
			
		}
		if(end==0)
			System.out.println("P may be prime.");
	}
}