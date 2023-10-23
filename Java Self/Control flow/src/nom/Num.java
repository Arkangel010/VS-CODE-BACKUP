package nom;

public class Num {
	public static void main(String[] args) {

		int n = 1623;
		int a = n / 1000;
		int b = n / 100;
		int c = n % 10;
		int s;
		while (b > 10) {
			b -= 10 * a;

		}
		int r = 0;
		int o = 1;

		do {
			b = b * b;
			c = c * c;
			s = b + c;
			r++;
		} while (r <= o);

		if ((s % 9) == 0) {
			System.out.println("Its a Lucky NO.");
		} else {
			System.out.println("Its not a Lucky NO.");
		}

	}

}