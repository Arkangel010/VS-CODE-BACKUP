package employee;

public class PermanentEmployee extends Employee {
	private int basicPay;

	public int getBasicPay() {
		return basicPay;
	}

	public void setBasicPay(int basicPay) {
		this.basicPay = basicPay;
	}

	private int hra;

	public int getHra() {
		return hra;
	}

	public void setHra(int hra) {
		this.hra = hra;
	}

	private int experience;

	public int getExperience() {
		return experience;
	}

	public void setExperience(int experience) {
		this.experience = experience;
	}

	double salary;

	void calculateSalary() {
		if(experience<3) {
		this.salary = basicPay + hra;
		}
		else if(experience>=3 && experience<5) {
			this.salary =(basicPay/100)*5 + basicPay + hra; 
		}
		else if  (experience>= 5 && experience<10) {
			this.salary = ((7/100)*basicPay) + basicPay + hra;
			
		}
		else if (experience>=10) {
			this.salary = ((12/100)*basicPay) + basicPay + hra;
		}
		else{
			
		}

}
}
