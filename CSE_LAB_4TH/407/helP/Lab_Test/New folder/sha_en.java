import java.util.Scanner;
import java.math.BigInteger;
import java.security.MessageDigest;

class sha_en
{
	public static void main (String[] args) 
	{
		System.out.println("Enter msg");
		Scanner sc=new Scanner(System.in);
		String input=sc.nextLine();
		System.out.println("SHA-1 is : "+sha_func(input));
	}
	
	public static String sha_func(String input)
	{
		String output=null;
		try
		{
			MessageDigest sha=MessageDigest.getInstance("SHA-1");
			sha.update(input.getBytes());
			output=new BigInteger(1,sha.digest()).toString(16);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
		return output;
	}
}