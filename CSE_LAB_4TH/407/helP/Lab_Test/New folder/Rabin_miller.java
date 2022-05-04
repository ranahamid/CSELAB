import java.util.Scanner;
import java.util.Random;
import java.math.BigInteger;

class rabin_miller
{
	public static void main (String[] args) 
	{
		System.out.println("Enter p: ");
		Scanner sc=new Scanner(System.in);
		BigInteger p=sc.nextBigInteger();
		if(p.equals(BigInteger.ZERO)|| p.equals(BigInteger.ONE))
		{
			System.out.println("P is not a prime number");
			System.exit(0);
		}
		
		//b,m
		BigInteger b=BigInteger.ZERO,x=p.subtract(BigInteger.ONE),res=BigInteger.ONE,m;
		while(x.mod(res).equals(BigInteger.ZERO))
		{	
			b=b.add(BigInteger.ONE);
			System.out.println("b is :"+b);
			res=BigInteger.valueOf(2).pow(Integer.parseInt(b.toString()));
			
		}
		b=b.subtract(BigInteger.ONE);
		res=res.divide(BigInteger.valueOf(2));
    	System.out.println("Finally b is :"+b);
		m=x.divide(res);
		
    	System.out.println("Finally m is :"+m);
		int i,test,end;
		System.out.println("Enter test: ");
		test=sc.nextInt();
		end=0;
		BigInteger a;
		for(i=1;i<=test;i++)
		{
			//step1
			do{
			  a=new BigInteger(p.bitLength(),new Random());
			  }while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
			System.out.println("case "+i+" a is : "+a);
			//step2
			int j=0;
			BigInteger z=a.modPow(m,p);
			//step3
			if( z.equals(BigInteger.ONE)|| z.equals(x))
			{
				end=0;
				System.out.println("p passes the step 3 and may be prime.");
				break;
				
			}	
			//step4,5	
			step4:{
				  //step4
				  if(j>0 && z.equals(BigInteger.ONE))
				     {
				     	System.out.println("p is not prime and fail at step 4.");
				     	end=1;
						break;
				     }
				  //step5
				  j++;
				  if( j<Integer.parseInt(b.toString()) && (!(z.equals(x)))  )
				    {
				    z=z.modPow(BigInteger.valueOf(2),p);
				    System.out.println("go back to step 4.");
				    break step4;
				    }
				  if(z.equals(x))
				  {
				  	System.out.println("p passes the test of step 5 and may be prime.");
					end=0;	
					break;
				  }  
				 }
			//step6
			if(j==Integer.parseInt(b.toString()) &&(!(z.equals(x))))
			{
				System.out.println( "p is not prime and fail at step 6.");
				end=1;
				break;
				
			}	 
				  		
		}
		
	if(end==1)
		System.out.println(p+ " is not prime.");
	else
		System.out.println(p+ " is  prime.");	
			
	}
}