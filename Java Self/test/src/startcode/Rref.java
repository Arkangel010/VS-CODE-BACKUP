package startcode;

public class Rref {
	int a[] = {20 ,4 ,15, 10, 14, 19 ,11, 8 ,5 ,19, 13, 8, 18, 13 ,3 ,12, 8, 16, 19, 11};
	boolean flag = true;
	public boolean IsPerfect(int n) {
			
		for (int i = 0; i < (a.length/2+a.length%2); i++) {

			if (a[i] == a[a.length - i - 1]) {
				

			} else 
				this.flag = false;
			break;
		}
		if(flag == true)
		System.out.println("PERFECT");
		return true;

	}
	public static void main(String[] args) {
		Rref my = new Rref();
		my.IsPerfect(20);
	}

}
