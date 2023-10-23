package exercise;

public class Percentage {
	public static void main(String[] args) {
		
		DataProvider per = new Intern(5000,500);
		
		 per.calcPercentage();
		 
		DataProvider per1 = new Trainee(6000);
		per1.calcPercentage();
		
		DataProvider per3 = new Intern(8000,500);
		per3.calcPercentage();
	}
	
		
		

}
