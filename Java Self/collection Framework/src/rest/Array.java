package rest;

import java.util.*;

public class Array {
	public static void main(String[] args) {
		ArrayList<String> al = new ArrayList<String>();
		al.add("ramesh");
		al.add("suresh");
		al.add("jayesh");
		al.add("naresh");
		ListIterator<String> i = al.listIterator();
		while(i.hasNext()) {
			System.out.println(i.next());
		}
		System.out.println("\n");
		System.out.println("Reverse\n");
		while(i.hasPrevious())
			System.out.println(i.previous());
	
	
	
	
	}

}
