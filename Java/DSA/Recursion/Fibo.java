package Java.DSA.Recursion;

import java.util.Scanner;

public class Fibo {
    public static int fibo(int a){

        if(a == 1) return 0;

        if(a == 2) return 1;

        return fibo(a - 1) + fibo(a - 2);

    }
    public static void main(String[] args) {
        int a;

        Scanner sc = new Scanner(System.in);

        a = sc.nextInt();

        System.out.println(fibo(a));
    }

}
