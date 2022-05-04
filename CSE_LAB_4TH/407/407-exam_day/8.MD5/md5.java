import java.util.Scanner;
import java.math.BigInteger;
import java.util.*;
import java.security.*;

class Main
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string to md5");
		String input=sc.nextLine();
		System.out.println("MD5 is : "+md5(input));		
		
	}
	
	public static String md5(String input)
	{
		String result=null;
			
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
		return  result;
	}
}