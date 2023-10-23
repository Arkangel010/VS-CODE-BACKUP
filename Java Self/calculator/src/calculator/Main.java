package calculator;

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		System.out.println("Choose an operation:");
		System.out.println("add,subtract,multiply,divide");
		Scanner io = new Scanner(System.in);
		Backend iz = new Backend();

		iz.Type = io.next();
		System.out.println("Enter first no:");
		iz.a = io.nextInt();
		System.out.println("Enter Second no:");
		iz.b = io.nextInt();
		// display(){//
		// System.out.println("Enter first no:");//
		// System.out.println("Enter Second no:");//
		// }//

		if (iz.Type.equals("add")) {
			iz.Add();
			iz.Output();
			System.out.println("The sum is " + iz.z + ".");

		}

		if (iz.Type.equals("subtract")) {

			iz.Substract();
			iz.Output();
			System.out.println("The answer is " + iz.z + ".");
		}

		if (iz.Type.equals("multiply")) {

			iz.Multiply();
			iz.Output();
			System.out.println("The product is " + iz.z + ".");
		}

		if (iz.Type.equals("divide")) {

			iz.Divide();
			iz.Output();
			System.out.println("The divident is " + iz.z + ".");
		}

	}

}
