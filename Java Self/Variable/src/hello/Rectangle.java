package hello;

public class Rectangle {
	public static void main(String[] args) {
		Extra oil = new Extra();
		oil.setBreadth(4);
		oil.setLength(40);
		if (oil.getBreadth() == oil.getLength()) {
			System.out.println("Its a square.");
			System.out.println(oil.getBreadth());
			System.out.println(oil.getLength());

		}

		else {
			System.out.println(oil.getBreadth());
			System.out.println(oil.getLength());

		}
	}
}
