//445
import java.util.*;
import java.math.BigInteger;
class Main
{
	public static void main (String[] args) 
	{
		//BigInteger p=BigInteger.valueOf(47),q=BigInteger.valueOf(71),e=BigInteger.valueOf(79);
		BigInteger p,q,e;
		int len=6;
		
		p=BigInteger.probablePrime(len,new Random());
		q=BigInteger.probablePrime(len,new Random());
		
		System.out.println("p : "+p);
		System.out.println("q : "+q);
		
		BigInteger n=p.multiply(q);
		BigInteger pq_1=(p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
		
		do{
			e=BigInteger.probablePrime(len,new Random());
		}while( !(pq_1.gcd(e).equals(BigInteger.ONE)));
		
		System.out.println("e : "+e);
		
		BigInteger d=e.modInverse(pq_1);
		System.out.println("d : "+d);
		
		int test;
		BigInteger m,c;
		while(true)
		{
			System.out.println("Enter your choice");
			Scanner sc=new Scanner(System.in);
			
			System.out.println("1: Encrypt");
			System.out.println("2: Decrypt");
			System.out.println("3: Exit");
			test=sc.nextInt();
			if(test==1)
			{
				//encrypt
				
			System.out.println("Enter plain text : ");
			m=sc.nextBigInteger();
			c=m.modPow(e,n);
			System.out.println("Cipher is : "+c);
			}
			else if(test==2)
			{				
			System.out.println("Enter cipher : ");
			c=sc.nextBigInteger();
			m=c.modPow(d,n);
			System.out.println("plain text : "+m);
			}
			else if(test==3)
			{
				System.exit(0);
			}
			else
			{
			System.out.println("Enter correct input.");
			}
			
		}
		
		
	}
}