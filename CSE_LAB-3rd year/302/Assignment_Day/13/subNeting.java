/**
 * @(#)subNeting.java
 *
 * subNeting application
 *
 * @author Tushar
 * @version 1.00 2012/9/21
 */

import java.util.*;
import java.io.*; 

public class subNeting {	


// Needed varaible for Subnetting
       private int[]  inputIp   =  new int[4];    
       private int[]  binaryIp  =  new int[32] ;  
       private int[]  maskIp    =  new int[32] ;	  
       private int[]  BiAndMask =  new int[32] ;
       private static int maxHost, hostBit, subnetBit ;
       private int highBit, lowBit ;
        		
        		//blockIp=192.168.23.7,   numHost=32,   numSubnet=4
public subNeting(String str, int host, int subnet )
{	       
       
       // store blockIp(string) to inputIp(int[4])
       set_inputIp(str);
       	          	
       // store inputIp(int[4]) to binaryIp(int[32])  
       set_binaryIp(); 
       
       // Find Necessary bit to represent host 
       hostBit = get_hostBit(host);

       // Find Necessary bit to represent Subnet 
       subnetBit = get_subnetBit(subnet);
       
       // Build up maskip(int[32])
       set_maskip(hostBit + subnetBit);
             
       // Build up BiAndMask(int[32])
       set_BiAndMask();
              
       // Number of maximum host 
       maxHost= twoPower(hostBit);
       
       // set highBit and lowBit .
       highBit = 31 ; 
       lowBit = 32-(hostBit+subnetBit);
           
}//end Constructor.


void set_inputIp(String str)
{
     String temp[] = str.split("\\."); 
     for ( int i=0; i<temp.length; i++) 
          inputIp[i] = Integer.parseInt(temp[i]);        	    
}  
///////     	 
void set_binaryIp( ) 
{
	 int temp[] = new int[4];
	 for (int i=0; i<inputIp.length; i++)
	 	 temp[i] = inputIp[i];
	 	 
	 int j=inputIp.length;	 
     for (int i=32; i>=1; i--) 
     	 {
         if( i%8==0 && i!=32) 
         	j=j-1; 
         binaryIp[i-1]= temp[j-1]%2;
         temp[j-1] = temp[j-1]/2;   	     
         }
        // for( j=0;j<32;j++)
       //  	System.out.println("sdf"+binaryIp[j]); 
}
int  get_hostBit(int host)
{
	   int i=0;
       while(host!=0) 
       	{
            i++;
            host=host/2; 
        }//System.out.println("sdf"+i);
       return  i;
       
}   
/*
 192.168.0.1
 32
 4
 
 **/
    
int  get_subnetBit(int subnet)
{
	   int i=0;
       while(subnet!=0)
       	{
             i++; 
             subnet=subnet/2; 
        }
       return (i-1); 
}     
  
void set_maskip(int totalBit)
{
       int i;
       for(i=0;  i<(32-totalBit);  i++)
           maskIp[i]=1;       
       for(;i<32; i++)
           maskIp[i]=0;       
}


void set_BiAndMask()
{
       for(int i=0; i<32; i++)
       {
       	BiAndMask[i]=binaryIp[i] & maskIp[i];
       // System.out.println("BiAndMask[i]"+BiAndMask[i]);
       }
}
       
// It returns 2^n value
int twoPower(int n)
{
	//int i,temp=1;
//	for(i=1; i<=n; i++)
//		 temp*=2;
	return (int) Math.pow(2,n);
}


void increment(int x)
{    
     int j,temp,sum,carry=x;
     for(j=highBit;j>=lowBit; j--)
     	{
        temp = BiAndMask[j]+carry;
        sum=temp%2;
        carry=temp/2;    
        BiAndMask[j]=sum;
        }
}
//////////ekhane 0001-0010--0011-0100 kora hoyeche

int allzero()
{
    int flag = 1,i;
    for( i=32-hostBit; i<32; i++)
    {
    	if(BiAndMask[i]==1)
    		{
    		flag=0;
    		break;
    		}
    }        
    return flag;
}
    
// if all 1's then return true(1)    
int allone()
{
    int flag = 1;
    for(int i=32-hostBit; i<32; i++)
     {
    	if(BiAndMask[i]==0)
    		{
    		flag=0;
    		break;
    		}
    }        
    return flag;
}

String decToStr(int x)
{
	Integer  result=0, j=x*8-1;
	for(int i=0; i<=7; i++)
		{
        result+= BiAndMask[j] * twoPower(i); 
        j--;
        } 
    return result.toString();
}   
// After update BiAndMask it give the decimal ip
String decimalValu()
{	 
	 String str = decToStr(1);        
     for (int i=2; i<=4; i++)
 	    str = str+"."+decToStr(i);     
     return str;   
}
// Assignment 13_(iv)////////numSubnet
void printSubnetAddresses(int numSubnet)
{
     set_BiAndMask() ;
     int carry=0,i,k ;
                         
     for(i=0; i<numSubnet; i++)
     	{
         increment(carry);
         carry = 1;
         System.out.println (decimalValu());               
         for( k=1; k<maxHost; k++)
         	  {                 
              increment(carry);
              if ( allone()==0 && allzero()==0 ) 
              System.out.println ("\t"+decimalValu());
              }      
        }
}

// Assignment 13_(v)
boolean  checkValid(int numSubnet,String ip)
{
	
     set_BiAndMask() ;     
     boolean flag = false;
     int carry=1, i,j,k;      
     int decIp[] = new int[4];
     int binIp[] = new int[32];	 
     	
     String temp[] = ip.split("\\."); 
     for ( i=0; i<temp.length; i++) 
     	{
       	   decIp[i] = Integer.parseInt(temp[i]);        	    
       	}
       	          	
     j = decIp.length ;
     for ( i=32; i>=1; i--) 
     	  {
          if( i%8==0 && i!=32) 
          	 j=j-1; 
          binIp[i-1] = decIp[j-1]%2;
          decIp[j-1] = decIp[j-1]/2;        
          }
     	
     for(i=0;  i<=numSubnet*maxHost;  i++) 
     	{
         if(isMatch(binIp))
         	{
         	 if ( allone()==1 || allzero()==1) 
         	 	flag = false ;
             else  
             	flag = true ;
             break ;
            } 
         increment(carry); 
         }
     return flag;
}

boolean isMatch(int binIp[])
{	
      boolean flag = true;
      for ( int i=0; i<32; i++) 
      {
      //	System.out.println("BiAndMask[i]="+BiAndMask[i]+"binIp[i]"+binIp[i]);
      	if(BiAndMask[i]!=binIp[i])
	      	 {
             flag= false; 
             break;
             }
      }      
      return flag;
}


// Increment 1 Between bits [lowBit....highBit] of BiAndMask[32]


// if all 0's then return true(1)
 
     




   
public static void main(String[] args) throws IOException 
{
	
       InputStreamReader isr = new InputStreamReader(System.in);	
       BufferedReader br = new BufferedReader(isr);
       
          
          
          System.out.println ("Enter Your Block Address :"); 
                 String blockIp = br.readLine();
          
          System.out.println ("Enter Number of Host Per Subnet :"); 
                 int numHost = Integer.parseInt(br.readLine());
                 numHost = numHost+1;///////////
              
          System.out.println ("Enter Number of Subnet :"); 
                 int numSubnet = Integer.parseInt(br.readLine());
          
          subNeting obj = new subNeting(blockIp,numHost,numSubnet);
          obj.printSubnetAddresses(numSubnet);
          
          
          
          
          
          System.out.println ("Enter Ip To Check It  ");
                 String ip = br.readLine();
          
          if(obj.checkValid(numSubnet,ip))
          	   System.out.println ("It is valid.");
          else System.out.println ("It is not valid.");
          	   	
	
}//end main
}//end subNeting