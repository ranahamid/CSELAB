import java.util.Scanner;
import java.security.MessageDigest;
import java.math.BigInteger;


class Main
{
	public static void main (String[] args) 
		{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Message for SHA Hashing");
		String input=sc.nextLine();
		System.out.println("SHA Hash code is: "+SHA(input));
		}
		
		
	public static String SHA(String input)
	    {
	    String hash=null;
		if(input!=null)
			{
				try{
					MessageDigest sha=MessageDigest.getInstance("SHA-1");
				
			   	    //MessageDigest sha=MessageDigest.getInstance("SHA-256");
			   	  
					sha.update(input.getBytes());
					hash=new BigInteger(1,sha.digest()).toString(16);
				   }
				catch(Exception e)
				{
					e.printStackTrace();
				}
				
			}
	    return hash;
	    }
}



//help

//SHA-1, SHA-256,  SHA-384,SHA-512 are different version of Secure Hash Function.
//http://docs.oracle.com/javase/7/docs/technotes/guides/security/StandardNames.html#MessageDigest

//BigInteger(int signum,byte[] magnitude)

//Translates the sign-magnitude representation of a BigInteger into a BigInteger.
// The sign is represented as an integer signum value: -1 for negative, 0 for zero, or 1 for positive.



//The java.math.BigInteger.toString(int radix) returns the String representation of this BigInteger in the given radix. 

//RANA-HAMID, CSE-RU.