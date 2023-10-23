package Java.DSA.Recursion;

import java.util.*;

public class Stair{

    public static int noOfWays(int Stairs){

        if(Stairs == 0) return 1;
        
        if(Stairs == 1) return 1;

        if(Stairs == 2) return 2;
 
        return noOfWays(Stairs - 1) + noOfWays(Stairs - 2) + noOfWays(Stairs - 3);

    }
    public static void main(String[] args) {
        int Stairs = 4;

        System.out.println(noOfWays(Stairs));
    }
}