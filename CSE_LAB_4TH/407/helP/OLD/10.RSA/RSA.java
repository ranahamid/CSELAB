import java.util.Scanner;
import java.math.BigInteger;


class RSA 
{
	//p=47,q=71,e=79
public static void main (String[] args) 
	{	
		BigInteger p=BigInteger.valueOf(47),q=BigInteger.valueOf(71),e=BigInteger.valueOf(79);
		BigInteger m,n,d,c;
		Scanner sc=new Scanner(System.in);
		
		System.out.println("p is : "+p);
		System.out.println("q is : "+q);
		System.out.println("e is : "+e);
		
		n=p.multiply(q);
		System.out.println("n: "+n);
		int n_len=n.toString().length();
		System.out.println("Length of n: "+n_len);
		
		BigInteger pq_1=(p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
		d=e.modInverse(pq_1);
		
		while(true)
		{
			System.out.println("\nEnter your choice");
			System.out.println("1: Encrypt\n2: Decrypt\n3: Exit");
			int test=sc.nextInt();
			if(test==1)
			{
				System.out.println("Enter message less than "+n_len+" length to encrypt");
				m=sc.nextBigInteger();
				c=m.modPow(e,n);
				System.out.println("Encypted cipher is: "+c);
			}
			
			else if(test==2)
			{	
				System.out.println("Enter Cipher  to decrypt:");
				c=sc.nextBigInteger();
				m=c.modPow(d,n);
				System.out.println("Decyrpted message is: "+m);
			}
			
			else if(test==3)
			{
				System.exit(0);
			}
			
			else
			{
				System.out.println("Enter correct choice...");
			}
			
			
		}//end of while
		
	}//end of main
}