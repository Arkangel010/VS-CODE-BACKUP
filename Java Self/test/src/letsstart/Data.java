package letsstart;

import java.util.Vector;

public class Data {
	
	
	public static void main(String[] args) {
		Vector<Integer> vec = new Vector<>();
		vec.add(1);
		System.out.println(vec);
		vec.add(1, 2);
		System.out.println(vec);
		Vector<Integer> vec1 = new Vector<>();
		vec1.add(3);
		vec1.add(4);
		vec1.add(5);
		vec.addAll(vec1);
		System.out.println(vec);
		vec.addElement(6);
		System.out.println(vec);
		System.out.println(vec.capacity());
		vec.clone();
		vec.contains(5);
		System.out.println(	vec.containsAll(vec1));
		vec.elementAt(5);
		vec.elements();
		vec.ensureCapacity(7);
		vec.firstElement();
		vec.get(5);
		vec.indexOf(4);
		vec.indexOf(3, 1);
		vec.insertElementAt(5, 6);
		System.out.println(vec);
		vec.add(5);
		vec.add(5);
		
	

		
		
		
	}
	
}
