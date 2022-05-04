import java.util.Random;
import java.util.Scanner;
import java.math.BigInteger;

class  lehman
{
	public static void main (String[] args) 
	{
	System.out.println("Enter p: ");
	Scanner sc=new Scanner(System.in);
	BigInteger p,a,p_1,expon,res;
	p=sc.nextBigInteger();
	
	System.out.println("");
	
	System.out.println("Number of test to performed: ");
	int end=0,test,i;
	test=sc.nextInt();
	for(i=1;i<=test;i++)
	   {
	   	do{
		  a=new BigInteger(p.bitLength(),new Random());
		  }while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
		
		System.out.println("Case "+i+" a is :  "+a);
		p_1=p.subtract(BigInteger.ONE);
		expon=p_1.divide(BigInteger.valueOf(2));
		res=a.modPow(expon,p);
		if(!( res.equals(BigInteger.ONE)||res.equals(p.subtract(BigInteger.ONE)) ))
		{
			
	System.out.println(p+" is definately not a prime.");
	     end=1;
	     break;
		}
		  
	   }
	   if(end==0)
	   {
	   	
	System.out.println(p+" is probable a prime.");
	   }	
	}
}