package nom;

public class Funcalculator {

	public static void main(String[] args) {
		int n = 372;
		int index = 0;
		int beg = 0;
		while (n > 0) {
			int c = n % 10;
			if (index % 1 == 0) {
				int d = c * c * c;
				beg = beg + d;
				n = n / 10;
			}

		}

	}
}