package Java.DSA.Recursion;

import java.util.Scanner;

public class Factorial {
    
    public static int fact(int a){
        if(a == 0) return 1;
        if(a == 1) return 1;

        return a * fact(a - 1);
    
    }
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);

        a = sc.nextInt();

        System.out.println(fact(a));
    }

}
