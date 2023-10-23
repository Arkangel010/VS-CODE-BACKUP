package salary;

public class Enhanced {

	int c;

	int[] marks = new int[5];
	String[] subject = new String[5];

	void subject() {
		subject[0] = "English";
		subject[1] = "Math";
		subject[2] = "Science";
		subject[3] = "compoter";
		subject[4] = "sst";
	}

	void vain(int a, int b, int c, int d, int e) {
		marks[0] = a;
		marks[1] = b;
		marks[2] = c;
		marks[3] = d;
		marks[4] = e;

	}

	public static void main(String[] args) {
		Enhanced mk = new Enhanced();
		mk.vain(20, 30, 40, 50, 60);
		mk.subject();
		for (int element : mk.marks) {
			System.out.println(element);

		}
		
		for (String element : mk.subject)
			System.out.println(element);
	}
}
