package salary;

public class Salary {
	public static void main(String[] args) {

		double[] data = { 23500.0, 25080.0, 28760.0, 22340.0, 19890.0 };
		double z = 0;
		double y;
		double k;
		double r = 0;
		int m = 0;
		int n = 0;
		int req = 0;

		for (int i = 0; i < data.length; i++) {
			y = data[i];
			z = z + y;

		}
		double fill = z / data.length;
		System.out.println("Average salary of employee is :" + fill);
		for (int i = 0; i < data.length; i++) {
			k = data[i];
			if (k > fill)
				m++;
			if (k < fill)
				req++;

		}

		System.out.println("The no of employess having salary Greater than average salary:" + m);
		for (int i = 0; i < data.length; i++) {
			k = data[i];
			if (k < fill)
				n++;

		}

		System.out.println("The no of employess having salary Lesser than average salary:" + n +" "+req);
	}
}
