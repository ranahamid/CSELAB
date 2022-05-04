import java.util.Random;
import java.util.Scanner;
import java.math.BigInteger;

public class lehmann
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		while(true)
		{
			System.out.println("Enter a value of 0 to end the program.");
			System.out.println("Enter a value for primality test using Lehmann Algorithm : ");
			BigInteger p = in.nextBigInteger();
			if(p.equals(BigInteger.ZERO))break;
			if((p.mod(BigInteger.valueOf(2))).equals(BigInteger.valueOf(0)))
			{
				System.out.println(p + " is not a prime number.");
				continue;
			}
			System.out.println("Enter the number of thimes the test should be repeated : ");
			int t = in.nextInt();
			int p1=0,n1=0,done=0;
			for(int i=0;i<t;i++)
			{
				BigInteger a;
				do {
				    a = new BigInteger(p.bitLength(), new Random());
				} while (a.compareTo(p) >= 0);
				//System.out.println(a);
				BigInteger pow = (p.subtract(BigInteger.ONE)).divide(BigInteger.valueOf(2));
				//System.out.println(pow);
				BigInteger res = a.modPow(pow, p);
				if((res.equals(BigInteger.ONE))||(res.equals(p.subtract(BigInteger.ONE))))
				{
					if(res.equals(BigInteger.ONE))p1++;
					if(res.equals(p.subtract(BigInteger.ONE)))n1++;
				}
				else
				{
					System.out.println(p + " is not a prime number.");
					done=1;break;
				}
			}
			if(done==0)
			{
				if((p1>=1)&&(n1>=1))System.out.println(p + " is most probably a prime number.");
				else if((p1>=1)||(n1>=1))System.out.println(p + " may be a prime number.");
			}
		}
		in.close();
	}
}

/*
 * 359334085968622831041960188598043661065388726959079837
 * 1298074214633706835075030044377087
 * 18014398241046527
 * 11111111111111111111111
 * 2003
 * 89
 */