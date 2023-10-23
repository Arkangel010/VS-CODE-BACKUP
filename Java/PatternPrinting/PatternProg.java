// Use Line Equation process to create formulas for Printing Pattern.Basically plot a (x - y)graph and analyze the x, y relation for the pattern.
package Java.PatternPrinting;

import java.util.Scanner;

public class PatternProg {
    Scanner in = new Scanner(System.in);

        void solidRectanglePrinter() {
        int l, b;
        System.out.print("Enter the Length of Rectangle: ");
        l = in.nextInt();
        System.out.print("Enter the Breadth of Rectangle: ");
        b = in.nextInt();
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < b; j++)
                System.out.print("*");
            System.out.println();
        }

    }

    public void hollowRectanglePrinter() {
        int l, b;
        System.out.print("Enter the Length of Rectangle: ");
        l = in.nextInt();
        System.out.print("Enter the Breadth of Rectangle: ");
        b = in.nextInt();
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < b; j++) {
                if (i == 0 || i == (l - 1) || j == 0 || j == (b - 1))
                    System.out.print("*");
                    else
                    System.out.print(" ");
            }
            System.out.println();
        }

    }

    public static void main(String[] args) {
        PatternProg obj = new PatternProg();

        obj.solidRectanglePrinter();
    }
}

