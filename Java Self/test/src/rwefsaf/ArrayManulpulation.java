package rwefsaf;

public class ArrayManulpulation {
	public static void main(String[] args) {
		int array[] = { 1, 2, 3, 4 , 2 , 3, 1 };
		for (int i = 0; i < array.length; i++) {
			for (int j = i + 1; j < array.length; j++) {
				if (array[i] == array[j]) {
					array[i] = 1;
					array[j] = 1;
				}
			}
		}
		for (int f = 0; f < array.length; f++) {
			if (array[f] != 1)
				System.out.println(array[f]);

		}
	}
}
