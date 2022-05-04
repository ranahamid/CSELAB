import java.util.*;
import java.math.*;

class Main
{
	public static void main (String[] args) 
	{
		BigInteger p,q,n,d,e,pq_1;
		int len=6;
		p=BigInteger.probablePrime(len,new Random());
		q=BigInteger.probablePrime(len,new Random());
		n=p.multiply(q);
		
		
		pq_1=(p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
	
		
		do{
			e=BigInteger.probablePrime(len,new Random());			
		  }while(!(pq_1.gcd(e)).equals(BigInteger.ONE));
		  
		  d=e.modInverse(pq_1);
		 // d=e.modPow(BigInteger.valueOf(-1),pq_1); //same
		  System.out.println("p : "+p);
		  System.out.println("q : "+q);
		  System.out.println("e : "+e);
		  System.out.println("d : "+d);
		  
		  Scanner sc=new Scanner(System.in);
		while(true)
		{
		  
		  System.out.println("1: Encode");
		  System.out.println("2: Decode");
		  System.out.println("3: Exit");
		  
		  int test=sc.nextInt();
		  
		  if(test==1)
		  	{
		  //	encode();
		   System.out.println("Enter input : ");
		   BigInteger m=sc.nextBigInteger();
		   BigInteger c=m.modPow(e,n);
		   System.out.println("cipher is : "+c);
		  	}
		  
		  	else if(test==2)
		  	{
		  //	decode();
		   System.out.println("Enter cipher : ");
		   BigInteger c=sc.nextBigInteger();
		    BigInteger m=c.modPow(d,n);	
		    System.out.println("msg is : "+m);
		  	}
		  
		  else if(test==3)
		  	{
		  	System.exit(0);
		  	}
		  	
		  	else 
		  		
		  	{
		  	System.out.println("Wrong input.");
		  	}
		  	
		  	
		 
		 }
		  
		  
	
		  
		
	}
}