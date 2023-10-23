package Java.DSA.Sorting;

import java.util.*;

public class Bubble{
    
    public static void sort(int arr[]){
        
        for(int i = 0; i < arr.length - 1; i++){

            for(int j = 0; j < arr.length - 1; j++){

                if(arr[j + 1] < arr[j]){

                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                }

            }

        }

    }
    public static void main(String[] args) {
        int arr[] = {1, 8, 2, 9, 7, 3};

        sort(arr);

        for(int i : arr){
            System.out.print(i + " ");
        }
    }
}