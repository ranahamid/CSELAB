/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.math.BigInteger;
import java.util.*;
import java.io.*;

/**
 *
 * @author Asik
 */
public class RabinMiller {

    /**
     * @param args the command line arguments
     */
    int b;
    BigInteger m;
    public  void mbcalculator(BigInteger p){
        b = 0;
        m = p;
        while( m.mod( BigInteger.valueOf(2)) == BigInteger.valueOf(0)){
            b++;
            m = m.divide(BigInteger.valueOf(2));
        }
    }

    public static void main(String[] args){
        // TODO code application logic here
        RabinMiller obj = new RabinMiller();
        BigInteger p;
        String str;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter p ( oddd and > 3 ) : ");
        if( scan.hasNextBigInteger()){
            p = scan.nextBigInteger();
            obj.mbcalculator( p.subtract( BigInteger.valueOf(1) ) );

            boolean prime = true;
            Random r = new Random();

            long a = r.nextLong();
            a = BigInteger.valueOf(a).mod(p).longValue();
            BigInteger z;

            z = BigInteger.valueOf(a).modPow(obj.m, p);

            if (z == BigInteger.valueOf(1) || z == p.subtract(BigInteger.valueOf(1))) {
                prime = true;
            }
            int j;

            for (j = 0; j < obj.b && !prime; j++) {
                if (j > 0 && z == BigInteger.valueOf(1)) {
                    prime = false;
                    break;
                }
                if (z != p.subtract(BigInteger.valueOf(1))) {
                    z = z.pow(2).mod(p);
                    continue;
                }
                if (z == p.subtract(BigInteger.valueOf(1))) {
                    break;
                }
            }
            if (j == obj.b && z != p.subtract(BigInteger.valueOf(1))) {
                prime = false;
            }

            if( prime ){
                System.out.println("Probably Prime");
            } else {
                System.out.println("Composite");
            }

        }
    }
}
