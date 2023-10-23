package rest;

import java.util.LinkedList;
import java.util.ListIterator;

public class Linked {
	public static void main(String[] args) {
		LinkedList<String> ls = new LinkedList<String>();
		ls.add("ramesh");
		ls.add("suresh");
		ls.add("jayesh");
		ls.add("naresh");
		int y = ls.size();
		System.out.println("Through for loop.\n");
		for (int z = 0; z < y; z++)
			System.out.println(ls.get(z));
		System.out.println("\n");
		System.out.println("Through Enhanced for loop.\n");
		for (String ele : ls)
			System.out.println(ele);
		
		ls.addFirst("mahesh");
		ls.addLast("jignesh");
		ListIterator<String> q = ls.listIterator();
		System.out.println("\n");
		System.out.println("Through iterator.\n");
		while (q.hasNext())
			System.out.println(q.next());
		

	}

}
