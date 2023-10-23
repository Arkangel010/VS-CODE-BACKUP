package exercise;

public class Trainee implements DataProvider {
	private int marksSecured;
	
	Trainee(int marksSecured){
		this.marksSecured = marksSecured;
		
	}
	public void calcPercentage() {
		double sum = marksSecured ;
		if (sum<totalMaximumMarks) {
		sum =((sum*100)/totalMaximumMarks);
		System.out.println("The total aggregate percentage secured is "+sum+ "%");
		
	}
		else {
			System.out.println("Please enter the correct marks.");
		}
	
	}
}
