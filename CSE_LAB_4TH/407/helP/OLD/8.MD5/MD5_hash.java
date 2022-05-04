import java.util.Scanner;
import java.security.MessageDigest;
import java.math.BigInteger;


class Main
{
	public static void main (String[] args) 
		{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Message for MD5 Hashing");
		String input=sc.nextLine();
		System.out.println("MD5 Hash code is: "+MD5(input));
		}
		
		
	public static String MD5(String input)
	    {
	    String hash=null;
		if(input!=null)
			{
				try{
			   	    MessageDigest md5=MessageDigest.getInstance("MD5");
					md5.update(input.getBytes());
					hash=new BigInteger(1,md5.digest()).toString(16);
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


//BigInteger(int signum,byte[] magnitude)

//Translates the sign-magnitude representation of a BigInteger into a BigInteger.
// The sign is represented as an integer signum value: -1 for negative, 0 for zero, or 1 for positive.



//The java.math.BigInteger.toString(int radix) returns the String representation of this BigInteger in the given radix. 

//RANA-HAMID, CSE-RU.