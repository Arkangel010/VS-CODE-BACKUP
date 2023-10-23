package com.infy.varargs;


import java.util.Arrays;

public class VarargsExercise1 {
	
	
	void displayList(int ... fata) {
		System.out.println("Data");
		int sum = 0;
		for (int a : fata) {
			sum = a;
		System.out.print(sum+" ");
		}
		System.out.println("");
		
	}
	
	
	void maxOfList(int ... data) {
		int ment = 0;
		for (int a : data) {
			
			if(a>ment)
				ment = a;
		}
		System.out.println("Max:"+ment);
	
	}
	
	void averageList(int ... sata) {
		int sum	 = 0;
		for (int a : sata)
			sum = sum + a;
		
		System.out.println("Average:"+sum/sata.length);
		
	}
	
	void sortList(int ... wata) {
		int sum = 0;
		System.out.println("Sorted List");
		for (int a : wata){
			sum = a;
		Arrays.sort(wata);
		System.out.print(sum + " ");
		}
		
	}
	
	public static void main(String[] args) {
		VarargsExercise1 kj = new VarargsExercise1();
		kj.displayList(60,70,80,90);
		kj.averageList(40,60,50,30);
		kj.maxOfList(30,40,50,80);
		kj.sortList(30,40,60,50);
	}
	
	
		
}

