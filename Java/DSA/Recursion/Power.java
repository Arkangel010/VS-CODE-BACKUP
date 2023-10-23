package Java.DSA.Recursion;

import java.math.BigInteger;
import java.util.*;

public class Power {
    public static BigInteger pow(BigInteger n, int p){
        if(p == 1) return n;

        if(p%2 != 0){
            return n.multiply(pow(n, p - 1));
        }

        return pow(n, p/2).multiply(pow(n, p/2));
    }

    public static void main(String[] args) {

        BigInteger a;
        int p;
        Scanner sc = new Scanner(System.in);
        a = sc.nextBigInteger();
        p = sc.nextInt();
        BigInteger c = pow(a, p);
        System.out.println(c);
        sc.close();
    
    }
}

