//259
import java.util.*;
import java.math.BigInteger;


public class Lehman_Prime_Test 
{
    public static void main(String[] args) 
    {
     Scanner sc=new Scanner(System.in);
     System.out.print("Enter a number P:");
     BigInteger p=sc.nextBigInteger();
    
     if(p.equals(BigInteger.ZERO)||p.equals(BigInteger.ONE))
     	{
     	System.out.print(p+" is not a prime number");
     	System.exit(0);
     	}
     	
     System.out.print("\n");
     
     System.out.print("Enter number of test to performed:");
     int test=sc.nextInt();
    
     int k=0,m=0,n=0,i,end=0; 	
     		
     for(i=0;i<test;i++)
     {
     	BigInteger a;
     	do{
     	  a=new BigInteger(p.bitLength(),new Random());
     	  }	while(a.compareTo(p)>=0 || a.equals(BigInteger.ZERO));
     	System.out.println("Case: "+(i+1)+", a is: " +a);
       	
       	BigInteger p_1=p.subtract(BigInteger.ONE);
       	BigInteger expon=p_1.divide(BigInteger.valueOf(2));
       	
       	BigInteger ans=a.modPow(expon,p);
       	
       	if(!(ans.equals(BigInteger.ONE) || ans.equals(p.subtract(BigInteger.ONE)) ))
       	{
       		
     	 	System.out.print(p+" is not a prime number");
     	 	end=1;
     	 	break;
     	 }
     }
     
     if(end==0)
     	{
     	System.out.print(p+" is a probably a prime number");
     	}
     
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