package letsstart;

import java.util.Vector;

public class Tyt {
 public static void main(String[] args) {
	 Vector<Integer> vec = new Vector<>();
	 vec.add(1);
	 vec.add(4);
	 vec.add(3);
	 vec.add(4);
	 vec.add(5);
	 vec.add(4);
	System.out.println(vec.indexOf(4,2));
}
}
