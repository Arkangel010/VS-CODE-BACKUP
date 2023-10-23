package Java.Multithreading;

public class onn {
    public static void main(String[] args) throws Exception {
        Thread thread = new calc();
        // Thread thread2 = new cal1();
        Thread thread3 = new calc();

        thread.setName("Ram");
        // thread2.setName("cal1");
        thread3.setName("Shyam");

        thread.start();
       
        thread3.start();

    }
}
