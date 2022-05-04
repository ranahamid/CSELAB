import java.util.Scanner;
import java.security.MessageDigest;
import java.math.BigInteger;

class Main
{	
public static void main (String[] args) 
	{
	Scanner sc=new Scanner(System.in);
	System.out.print("Enter String: ");
	String st=sc.nextLine();
	System.out.print("MD5 String: "+md5(st));
	}
	
	public static String md5(String input)
	{
	String result=null;
	if(input!=null)
	{
			
		try
		{
		MessageDigest md5=MessageDigest.getInstance("MD5");
		md5.update(input.getBytes());
	 result=new BigInteger(1,md5.digest()).toString(16);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
	return  result;
	
	}
}