package com.infy.assignment.exceptionhandling;

public class TryMathCube {
	public int cube(int n) {
		return n * n * n;
	}
	public static void main(String[] args) {
		
		TryMathCube tc = new TryMathCube();
		int num = Integer.parseInt(args[1]);
		try {
		System.out.println(tc.cube(num));
		}
		catch(Exception e) {
			System.out.println("ex");
		}
	

}
}
