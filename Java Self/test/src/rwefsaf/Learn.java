package rwefsaf;

public class Learn {
public static void main(String[] args) {
	int array[] = {1,4,5,6,3};
	int pair = 0;
	for(int i = 0; i < array.length;i++) {
		for (int r = i+1; r < array.length;++r) {
			for(int s = r+1; s < array.length; s++) {
				if (array[i]+array[r]+array[s] == 12) {
					pair++;
				}
			}
		}
	}
	System.out.println(pair);
}
}
