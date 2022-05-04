
import java.util.Scanner;
import java.math.BigInteger;
import java.security.MessageDigest;

class Text1 
{
public static void main (String[] args) 
	{
	System.out.println("Enter msg for SHA hashing");
	Scanner sc=new Scanner(System.in);
	String input=sc.nextLine();
	System.out.println("sha hash is: "+sha_func(input));
	}   
    public static String sha_func(String input)
    {
    	String hash=null;
    	if(input!=null)
    	{
    		try
    		{
    		MessageDigest sha=MessageDigest.getInstance("SHA-1");
    		sha.update(input.getBytes());
    		hash=new BigInteger(1,sha.digest()).toString(16);
    		}
    		catch(Exception e)
    		{
    			e.printStackTrace();
    		}
    	}
    	return  hash;
    }
}