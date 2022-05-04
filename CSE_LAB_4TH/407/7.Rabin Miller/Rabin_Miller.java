import java.util.*;
import java.math.BigInteger;

class Main
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter p : ");
		BigInteger p=sc.nextBigInteger();
		if(p.equals(BigInteger.ZERO)||p.equals(BigInteger.ONE))
		{
			System.out.println(p+ " is not a prime number.");
			System.exit(0);
		}
		 if(p.compareTo(BigInteger.ZERO)<0)
		{
			System.out.println("Enter positive number.");
			System.exit(0);
		}
		
		BigInteger res=BigInteger.ONE;
		BigInteger b=BigInteger.ZERO;
		BigInteger x=p.subtract(BigInteger.ONE);
		BigInteger m;
		System.out.println("executing while.");
		
		while(x.mod(res).equals(BigInteger.ZERO))
		{
			b=b.add(BigInteger.ONE);
			res=(BigInteger.valueOf(2)).pow(Integer.parseInt(b.toString()));
		}
		b=b.subtract(BigInteger.ONE);
		res=res.divide(BigInteger.valueOf(2));
		m=x.divide(res);
		
		System.out.println("b is : "+b);		
		System.out.println("m is : "+m);
		
		BigInteger a,z;
		int test,j,is_prime=0;
		System.out.println("Enter number of test : ");
		test=sc.nextInt();
		for(int i=0;i<test;i++)
		{
			//step1
			do{
				a=new BigInteger(p.bitLength(),new Random());
			}while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
			
			//step 2
			j=0;			
			z=a.modPow(m,p);
			//step3
			if(z.equals(BigInteger.ONE)|| z.equals(x))
			{
				System.out.println("pass the step3 and may be prime");
				is_prime=1;
				break;
			}
			//step4
			step4:
				{
					//step4
					if(j>0 && z.equals(BigInteger.ONE))
					{
					System.out.println("fail at step4 and not prime");
					is_prime=0;
					break;
					}
					//step5
					j++;
					if(j<(Integer.parseInt(b.toString())) && !(z.equals(x)) )
					{
						z=z.modPow(BigInteger.valueOf(2),p);
						System.out.println("Go to step4 from step 5");
						break step4;
					}
					if(z.equals(x))
					{
						System.out.println("pass the step5 and may be prime");
						is_prime=1;
						break;
					}
				}//end of step4
				
				//step6
				if(j==(Integer.parseInt(b.toString())) && !(z.equals(x)))
				{
					System.out.println("fail at step6 and not prime");
					is_prime=0;
					break;
				}
		
		
			
		}//end of test
	if(is_prime==0)
	  {
		System.out.println(p+ " is not a prime number");	
	  }	
	else if(is_prime==1)
	  {
		System.out.println(p+ " is a prime number");	
	  }
	}
}