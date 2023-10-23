package rwefsaf;

public class Tester{
	public static void showStudent(Student info) {
		System.out.println(info);
	}
	public static void main(String[] args) {
		Student in = new Student(3, "hi");
		showStudent(in);
	}
}
