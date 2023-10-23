package exercise;

public class Intern implements DataProvider {
	private int marksSecured;
	private int graceMarks;

	Intern(int marksSecured, int graceMarks) {
		this.marksSecured = marksSecured;
		this.graceMarks = graceMarks;
	}

	public void calcPercentage() {
		double sum = marksSecured + graceMarks;
		if (sum < totalMaximumMarks) {
			sum = (sum * 100) / totalMaximumMarks;
			System.out.println("The total aggregate percentage secured is " + sum + "%");
		} else {
			System.out.println("Please enter the correct marks.");
		}

	}
}
