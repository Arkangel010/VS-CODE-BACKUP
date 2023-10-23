package Java.IO;
import java.io.*;
public class Basic {
    public static void main(String[] args) throws IOException{
        // File file2 = new File("aman");
        // file2.mkdir(); // Used to make folder/directory
        // System.out.println(file2.exists());
        // File file1 = new File(file2, "aman.txt");  
        // System.out.println(file1.exists());

        // file1.createNewFile();
        // System.out.println(file1.exists());

        // FileWriter fw = new FileWriter(file1,true); // the true turns on the append mode.
        // fw.write("hello");
        // fw.close();
        
        File dr = new File("aman", "aman.txt");

        FileReader fr = new FileReader(dr);
        int i = fr.read();
        while(i != -1){
        System.out.print((char)i);
        i = fr.read();
        }

        fr.close();
        
    }


    
}
