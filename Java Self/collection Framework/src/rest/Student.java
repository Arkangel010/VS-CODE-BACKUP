package rest;

import java.util.HashSet;
import java.util.Set;

public class Student {
	private String name;
	private int rollNumber;
 
        public Student(String name, int rollNumber) {
		this.name = name;
		this.rollNumber = rollNumber;
	}
	public String getName() {
		return name;
	}
 
	public void setName(String name) {
		this.name = name;
	}
 
	public int getRollNumber() {
		return rollNumber;
	}
 
	public void setRollNumber(int rollNumber) {
		this.rollNumber = rollNumber;
	}
	
	@Override	
	public String toString() {
		return  name + rollNumber;
	}
	void check() {
		Set<Integer> l = new HashSet<Integer>();
		l.add(rollNumber);
	}
}
