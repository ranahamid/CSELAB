import java.util.Random;
import java.util.Scanner;
import java.math.BigInteger;

public class rabin_miller
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		while(true)
		{
			int done=0;
	//	System.out.println(BigInteger.valueOf(4).divide(BigInteger.valueOf(8)));
			System.out.println("Enter a value of 0 to end the program.");
			System.out.println("Enter a value for primality test using Rabin-Miller Algorithm : ");
			BigInteger p = in.nextBigInteger();
			if(p.equals(BigInteger.ZERO))break;
			if(p.equals(BigInteger.ONE))
			{
				System.out.println(p + " is not a prime number.");
				System.out.println("Getting out from step my own 1.");
				done=1;
				break;
			}

			if((p.mod(BigInteger.valueOf(2))).equals(BigInteger.valueOf(0)))
			{
				System.out.println(p + " is not a prime number.");
				continue;
			}

			BigInteger b = BigInteger.ZERO, res = BigInteger.ONE, x = p.subtract(BigInteger.ONE), m;

			while((x.mod(res)).equals(BigInteger.ZERO))
			{
				b = b.add(BigInteger.ONE);
				System.out.println("b i n int.string : "+Integer.parseInt(b.toString()));
				res = (BigInteger.valueOf(2)).pow(Integer.parseInt(b.toString()));
				System.out.println("res is : "+res);
			}

			b = b.subtract(BigInteger.ONE);

			m = x.divide(res.divide(BigInteger.valueOf(2)));
			System.out.println("b = " + b);
			System.out.println("m = " + m);
			
			System.out.println("Enter the number of times the test should be repeated : ");
			int t = in.nextInt();
			for(int i=0;i<t;i++)
			{
				//step 1
				BigInteger a;
				do {
				    a = new BigInteger(p.bitLength(), new Random());
				} while (a.compareTo(p) >= 0);
				//System.out.println("a = " + a);
				//step 2
				int j=0;
				BigInteger z = a.modPow(m, p);
				//step 3
				System.out.println("In Step 3.");
				System.out.println("j = " + j);
				System.out.println("z = " + z);
				System.out.println("b = " + b);
				System.out.println("(p-1) = " + p.subtract(BigInteger.ONE));
				if((z.equals(BigInteger.ONE))||(z.equals(p.subtract(BigInteger.ONE))))
				{
					System.out.println(p + " may be a prime number.");
					System.out.println("Getting out from step 3.");
					done=1;
					break;
				}
				step4:
				{
					System.out.println("In Step 4 and 5.");
					System.out.println("j = " + j);
					System.out.println("z = " + z);
					System.out.println("b = " + b);
					System.out.println("(p-1) = " + p.subtract(BigInteger.ONE));
					//step 4
					if((j>0)&&(z.equals(BigInteger.ONE)))
					{
						System.out.println(p + " is not a prime number.");
						System.out.println("Getting out from step 4.");
						done=1;
						break;
					}
					//step 5
					j++;
					if((j<(Integer.parseInt(b.toString())))&&(!(z.equals(p.subtract(BigInteger.ONE)))))
					{
						z = z.modPow(BigInteger.valueOf(2), p);
						System.out.println("Jumping from step 5 to 4.");
						break step4;
					}


					if(z.equals(p.subtract(BigInteger.ONE)))
					{
						System.out.println(p + " may be a prime number.");
						System.out.println("Getting out from step 5.");
						done=1;
						break;
					}
				}
				System.out.println("In Step 6.");
				System.out.println("j = " + j);
				System.out.println("z = " + z);
				System.out.println("b = " + b);
				System.out.println("(p-1) = " + p.subtract(BigInteger.ONE));
				//step 6
				if((j==(Integer.parseInt(b.toString())))&&(!(z.equals(p.subtract(BigInteger.ONE)))))
				{
					System.out.println(p + " is not a prime number.");
					System.out.println("Getting out from step 6.");
					done=1;
					break;
				}
			}
			if(done==0)
			{
				System.out.println(p + " is not a prime number.");
				System.out.println("Getting out from step my own 2.");
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
