package Java.Array;

import java.util.*;

public class RotateArray
{
    
    
    public static void Rotatearray(int[][] arr){
        int k = arr.length - 1;

       
        for(int i = 0; i < arr.length; i++){

            for(int j = 0; j < arr.length; j++)
            {

                int temp = arr[i][j];
                arr[i][j] = arr[j][k];
                arr[j][k] = temp;

            }
            k--;

        }
    }
    public static void main(String[] args) {
        int arr[][] = {{1, 2, 3},    //7, 4, 1
                 {4, 5, 6},          //8, 5, 2
                 {7, 8, 9}};        // 9, 6, 3 

        Rotatearray(arr);

        for(int i = 0; i < arr.length; i++){

            for(int j = 0; j < arr.length; j++){

                System.out.print(arr[i][j]);
            }
            System.out.println();
        }
    }
}
