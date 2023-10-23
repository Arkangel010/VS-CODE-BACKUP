package employee ;

public class ContractEmployee extends PermanentEmployee {
	private double wages;
	
	public double getWages() {
		return wages;
	}

	public void setWages(double wages) {
		this.wages = wages;
	}

	private int hours;

	public int getHours() {
		return hours;
	}

	public void setHours(int hours) {
		this.hours = hours;
	}
	double Salary;
	void calculateSalary() {
		Salary =(double)hours*wages;
	}
	
	
}
