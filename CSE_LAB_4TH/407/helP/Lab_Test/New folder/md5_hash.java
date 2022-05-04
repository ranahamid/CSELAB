import java.util.Scanner;
import java.security.MessageDigest;
import java.math.BigInteger;

class md5
{
	public static void main (String[] args) 
		{
		System.out.println("Input a msg");
		Scanner sc=new Scanner(System.in);
		String input=sc.nextLine();
		System.out.println("Hash is : "+md5_func(input));
		}
	public static String md5_func(String input)
	{
		String output=null;
		try
			{
		
		MessageDigest md5=MessageDigest.getInstance("MD5");
		md5.update(input.getBytes());
		output=new BigInteger(1,md5.digest()).toString(16);
			}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	return  output;	
	}
}