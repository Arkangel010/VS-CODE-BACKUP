package Java.Multithreading;

import java.util.Scanner;

public class cal1 extends Thread{
    public void run(){
        System.out.println("Hello from cal1!");
        String a;
        Scanner obj = new Scanner(System.in);
        a = obj.nextLine(); // delay leads to its execution at last save cpu time cycle.
    }
}
