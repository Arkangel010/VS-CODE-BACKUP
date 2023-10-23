package Java.Basic;

import java.util.Scanner;

public class Basic {
       Scanner in = new Scanner(System.in);

        void input() {
              int a, b;
              System.out.print("Enter a no: ");
              a = in.nextInt();
              System.out.print("Enter a no: ");
              b = in.nextInt();
              sum(a, b);
       }

       public void sum(int a, int b) {
              System.out.print("The Sum is : " + (a + b) + "\n");
       }

       public static void main(String[] args) {
              // Basic obj = new Basic();
              // obj.input();
              // float f = 14.5f;
              // System.out.println(f);
              // double e = f; // implicit type casting
              // f = (float)e; // explicit type casting
              // System.out.println(e);
              // System.out.println("Enter a float value: ");
              // f = obj.in.nextFloat();

              // System.out.println(f);
              int arr[][] = new int[8][4];
              System.out.println(Integer.SIZE/8);
              
              



       }
}