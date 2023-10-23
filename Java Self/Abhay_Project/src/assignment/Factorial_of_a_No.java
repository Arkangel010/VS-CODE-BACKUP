package assignment;

public class Factorial_of_a_No {
	static int Number;
	static long Factorial(int No) {
		long Multiplier = No;
		while (No > 1) {
			Multiplier *= (No - 1);
			No--;
		}
		return Multiplier;
	}

	public static void main(String[] args) {
		System.out.println("The Factorial is = " + Factorial(8));
	}
}
