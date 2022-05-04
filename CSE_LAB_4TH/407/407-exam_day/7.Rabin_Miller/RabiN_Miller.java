import java.util.*;
import java.math.BigInteger;

class main
{
	public static void main (String[] args) 
		{
		
		BigInteger a,p,b,m,result,x,z;
		int j,i,test;
		System.out.println("Enter p : ");
		Scanner sc=new Scanner(System.in);
		p=sc.nextBigInteger();
		if(p.equals(BigInteger.ZERO) || p.equals(BigInteger.ONE))
		{
			System.out.println(p+" is not a prime number.");
			System.exit(0);
		}
		else if(p.compareTo(BigInteger.ZERO)<0)
		{
			System.out.println("Enter positive number.");
			System.exit(0);
		}
		
		b=BigInteger.ZERO;
		result=BigInteger.ONE;
		x=p.subtract(BigInteger.ONE);
		
		while(x.mod(result).equals(BigInteger.ZERO))
		{
			b=b.add(BigInteger.ONE);
			result=BigInteger.valueOf(2).pow(Integer.parseInt(b.toString()));
		}
		
		b=b.subtract(BigInteger.ONE);
		result=result.divide(BigInteger.valueOf(2));
		m=x.divide(result);
		
		System.out.println("b : "+b);
		System.out.println("m : "+m);			
		
		
		System.out.println("Enter test case ");
		test=sc.nextInt();
		boolean  is_prime=true;
		
		for(i=0;i<test;i++)
			{
			//step1
			do
				{
				a=new BigInteger(p.bitLength(),new Random());
				}while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
			System.out.println("test : "+(i+1)+", a= "+a); 	
			//step2
				j=0;
				z=a.modPow(m,p);
			//step3
				if(z.equals(BigInteger.ONE) || z.equals(x))
				{
				System.out.println("pass the step3 & may be prime.");
				is_prime=true;
				break;
				}	
			//step4
			step4:
				{
					//step4
					if(j>0 && z.equals(BigInteger.ONE))
					{
						
					System.out.println("fail at step 4.");
					is_prime=false;
					break;
					}
					
					//step5
					j++;
					if(j<Integer.parseInt(b.toString()) && !(z.equals(x)) )
						{
						z=z.modPow(BigInteger.valueOf(2),p);
						System.out.println("Go to step4 from step 5");
						break step4;
						}
					if(z.equals(x))
						{
						
						System.out.println("pass the step 5");
						is_prime=true;
						break;
						}
				}//end of step4			
			//step6
			
			if(j==Integer.parseInt(b.toString()) && !(z.equals(x)) )
					{
							System.out.println("fail at the step 6");
							is_prime=false;
							break;
							
					}
				
			}
		
	if(is_prime)
		System.out.println(p+" may be prime.");	
	else
		
		System.out.println(p+" is not a prime.");
		
		
		}
}	