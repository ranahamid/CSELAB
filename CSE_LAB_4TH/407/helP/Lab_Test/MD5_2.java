
import java.util.Scanner;
import java.math.BigInteger;
import java.security.MessageDigest;

class Text1 
{
public static void main (String[] args) 
	{
	System.out.println("Enter msg for MD5 hashing");
	Scanner sc=new Scanner(System.in);
	String input=sc.nextLine();
	System.out.println("MD5 hash is: "+md5_func(input));
	}   
    public static String md5_func(String input)
    {
    	String hash=null;
    	if(input!=null)
    	{
    		try
    		{
    		MessageDigest md5=MessageDigest.getInstance("MD5");
    		md5.update(input.getBytes());
    		hash=new BigInteger(1,md5.digest()).toString(16);
    		}
    		catch(Exception e)
    		{
    			e.printStackTrace();
    		}
    	}
    	return  hash;
    }
}