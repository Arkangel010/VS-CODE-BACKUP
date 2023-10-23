package letsstart;

import java.util.Arrays;
import java.util.Vector;

public class Explode {
	int store;
	Vector<Integer> vec = new Vector<>();

	Explode(Integer... No) {

		vec.addAll(Arrays.asList(No));
	}
	void TotalNoOfOccurence(int no) {
		int lastOccurenceIndex = vec.lastIndexOf(no);
		int firstoccurence = 0;
		this.store = 0;
		while(store <= lastOccurenceIndex ) {
			
			int indexOfElementN = vec.indexOf(no, store);
			indexOfElementN++;
			this.store = indexOfElementN;
			firstoccurence++;
			
		}
		System.out.println("No of Total Occurences: "+firstoccurence);
	}
	void occurence(Integer no,int occurence) {
		int firstoccurence = 0;
		if(occurence == 1) {
		firstoccurence = 0;
		}
		
		
		int index = 0 ;	
		while(firstoccurence < occurence) {
			int indexOfElementN = vec.indexOf(no, store);
			index = indexOfElementN;
			indexOfElementN++;
			this.store = indexOfElementN;
			firstoccurence++;
			
		}
		System.out.println("Index of Given No: "+index);
		TotalNoOfOccurence(no);
		 }
	
	
	public static void main(String[] args) {
		Explode er = new Explode(1,5,3,5,6,5,7,8,8,8,8,8,8,8,8);
		er.occurence(8, 3);
		int a = 0;
		if( a >0)
			System.out.println("ji");
		else if (a<0)
			System.out.println("hi");
		
	}
}
