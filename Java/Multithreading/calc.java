package Java.Multithreading;
import java.util.*;
public class calc extends Thread {
      synchronized public void run(){
       // String s = Thread.currentThread().getName();
      
        try{
            rent(Thread.currentThread().getName());
        Thread.sleep(2000);
       returned(Thread.currentThread().getName());
        }
        catch(Exception e){
            System.out.println("Not ok");
        }

    }
    synchronized public void rent(String s){
        System.out.println(s + " took the car!");
    
    }
    synchronized public void returned(String s){
        System.out.println(s + " returned the car!");
    }
    
}
