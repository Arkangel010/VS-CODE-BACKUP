package assignment;

public class Average_of_N_NO {
	static float Avg(int... No) {
		int t = 0;
		float Sum = 0;
		while (t < No.length) {
			Sum += No[t];
			t++;
		}
		Sum = Sum / No.length;
		return Sum;
	}

	public static void main(String[] args) {
		System.out.println("The Average is = "+Avg(1,2,3,3,4));
	}
}
