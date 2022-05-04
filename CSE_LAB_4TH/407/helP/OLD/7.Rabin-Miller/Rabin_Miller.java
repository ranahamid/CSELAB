import java.util.*;
import java.math.*;


public class Rabin_Miller
{
	public static void main (String[] args) 
	{
		Scanner in = new Scanner(System.in);
		
		Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number P:");
     	BigInteger p=sc.nextBigInteger();
     	
     	if(p.equals(BigInteger.ZERO)||p.equals(BigInteger.ONE))
     		{
     		System.out.print(p+" is not a prime number");
     		System.exit(0);
     		}
     	System.out.print("\n");
     	
     	BigInteger b=BigInteger.ZERO,res=BigInteger.ONE,x=p.subtract(BigInteger.ONE),m;
     	
		while(x.mod(res).equals(BigInteger.valueOf(0)))
     	{
     		b=b.add(BigInteger.valueOf(1));
     		res=(BigInteger.valueOf(2)).pow(Integer.parseInt(b.toString()));
	
     	//	System.out.println("b   = : "+Integer.parseInt(b.toString()));/////////
		//	System.out.println("res = : "+res);///////////
     	}
		
     	b=b.subtract(BigInteger.valueOf(1));
     	res=res.divide(BigInteger.valueOf(2));//2^b
     	
     	m=x.divide(res);
     	System.out.println("b = " + b);//////////
		System.out.println("m = " + m);//////////
			
     	System.out.print("Enter number of test to performed:");
     	int test=sc.nextInt();
    
     	int i,end=0; 
     	for(i=0;i<test;i++)
     	{
     		//step 1
     		BigInteger a;
     		do
     		{
     	  		a=new BigInteger(p.bitLength(),new Random());
     	  	}while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
     		
     		System.out.println("Case: "+(i+1)+", a is: " +a);
 			
 			//step 2
 			int j=0;
 			BigInteger z=a.modPow(m,p);
 			//step 3
 			if( (z.equals(BigInteger.valueOf(1))) || (z.equals(p.subtract(BigInteger.valueOf(1)))) )
 			{
 				System.out.println(p+" may be prime and pass the step 3");
 				end=1;
 				break;
 			}
 			//step 4,5
 			step4:
 			{
			   //step 4
 				if( (j>0) && (z.equals(BigInteger.ONE)) )
	 				{
	 					System.out.println(p+" is not a prime number and fail step 4");
	 					end=0;
	 					break;
	 				}       	
	       		//step 5
	       		j++;
	       		if( (j<Integer.parseInt(b.toString())) && (!(z.equals(p.subtract(BigInteger.valueOf(1))))))
	       		{
	       			z=z.modPow(BigInteger.valueOf(2),p);
	       			System.out.println("Jumping from step 5 to step 4");
	       			//break step4;
	       			break step4;
	       			
	       		}	
	 			if(z.equals(p.subtract(BigInteger.valueOf(1))))
	 			{
	 				System.out.println(p+" may be prime and pass the step 5");
	 				end=1;
	 				break;
	 			}
 			}//end of step4 label
 			  
 			//step 6     	
       	    if ( (j==Integer.parseInt(b.toString())) && (!(z.equals(p.subtract(BigInteger.valueOf(1))))) )
       	    {
       	    	System.out.println(p+" is not a prime number and fail step 6");
 				end=0;
 				break;
       	    }
       	
     	}//end of for 
       	
		if(end==0)
			System.out.println(p+" is not a prime number.");
		else
			System.out.println(p+" is  a prime number.");
				
 						
	}
}


//INPUT
/*
 2003
 89
 
 
 79
 5
 
 */
//Rana Hamid,CSE-RU.