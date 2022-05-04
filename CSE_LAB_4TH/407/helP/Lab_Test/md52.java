package net.viralpatel.java.md5;
 
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
 
 class JavaMD5Hash {
 	
 
    public static void main(String[] args) 
    {
 
            String password = "123456";
            System.out.println("MD5 in hex: " + md5(password));
    }
     
     
    public static String md5(String input) 
	{
         
        String md5 = null;
         
        if(null == input) 
        	return null;
         
        try 
        	{
             
        //Create MessageDigest object for MD5
        MessageDigest digest = MessageDigest.getInstance("MD5");
         
        //Update input string in message digest
        digest.update(input.getBytes());
        //Converts message digest value in base 16 (hex)
        md5 = new BigInteger(1, digest.digest()).toString(16);
 
         } 
        	catch (NoSuchAlgorithmException e) 
        	{
 
            e.printStackTrace();
            }
        return md5;
    }
}


//BigInteger(int signum,byte[] magnitude)

//Translates the sign-magnitude representation of a BigInteger into a BigInteger.
// The sign is represented as an integer signum value: -1 for negative, 0 for zero, or 1 for positive.



//The java.math.BigInteger.toString(int radix) returns the String representation of this BigInteger in the given radix. 





 