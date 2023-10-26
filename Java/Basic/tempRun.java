package Java.Basic;

import java.util.Scanner;

public class tempRun {
    // Online Java Compiler
// Use this editor to write, compile and run your Java code online
public static int pow(int n, int p){
    if(p == 0) return 1;
    return pow(n, p - 1) * n;
}
 public static int fact(int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
public static int fact_Recusion(int n){
    if(n == 0) return 1;
    return fact_Recusion(n - 1) * n;
}

public static int sum(int no, int pow){
    int res = 0;

    for(int i = 0; i <= pow; i++){
        res += pow(no, i);
    }
    return res;
}

public static int sum_Recursion(int no, int pow){
    if(pow == 0) return 1;

    int nms = sum_Recursion(no, pow - 1);
    int cs = 1;
    for(int i = 0; i < pow; i++){
        cs = cs * no;
    }

    return nms + cs;
}

    public static void calculator(int a, int b, char c){
        
        switch(c){
            case '+':
                System.out.println("Answer : " + (a + b));
                break;
            case '-':
                System.out.println("Answer : " + (a - b));
                break;
            case '/':
                System.out.println("Answer : " + (a / b));
                break;
            case '*':
                System.out.println("Answer : " + (a * b));
                break;
            default:
                System.out.println("Enter a valid operator!");
                break;
        }
    }
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int a,b;
       char c;
       System.out.print("Enter first no : ");
       a = sc.nextInt();
       System.out.print("Enter Second no : ");
       b = sc.nextInt();
       System.out.print("Enter Operation : ");
       c = sc.next().charAt(0);
       calculator(a, b, c);

    //System.out.println(fact(5));
    //System.out.println(fact_Recusion(5));
    //System.out.println(sum(2, 2));
  
    }
}

