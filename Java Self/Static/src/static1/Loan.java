package static1;


public class Loan {
	
	private int loanNo;
	private int accountNo;
	private int customerNo;
	private int loanDuration;
	private float loanAmount;
	private float intrest;
	static private int loanCounter ;
	
	
	public int getLoanNo() {
		return loanNo;
	}
	public void setLoanNo(int loanNo) {
		this.loanNo = loanNo;
	}
	public int getAccountNo() {
		return accountNo;
	}
	public void setAccountNo(int accountNo) {
		this.accountNo = accountNo;
	}
	public int getCustomerNo() {
		return customerNo;
	}
	public void setCustomerNo(int customerNo) {
		this.customerNo = customerNo;
	}
	public int getLoanDuration() {
		return loanDuration;
	}
	public void setLoanDuration(int loanDuration) {
		this.loanDuration = loanDuration;
	}
	public float getLoanAmount() {
		return loanAmount;
	}
	public void setLoanAmount(float loanAmount) {
		this.loanAmount = loanAmount;
	}
	public float getIntrest() {
		return intrest;
	}
	public void setIntrest(float intrest) {
		this.intrest = intrest;
	}
	
	
	public static int getLoanCounter() {
		return loanCounter;
	}
	public static void setLoanCounter(int loanCounter) {
		Loan.loanCounter = loanCounter;
	}
	
	Loan(){		
		loanCounter++;
	}
	
	Loan(int accountNo,int customerNo,float loanAmount,int loanDuration,float intrest,int loanNo){
		this.accountNo = accountNo;
		this.customerNo = customerNo;
		this.loanAmount = loanAmount;
		this.loanDuration = loanDuration;
		this.intrest = intrest;
		this.loanNo = loanNo;
		loanCounter++;	
	}
	public static void main(String[] args) {
		for (Loan at:Loan.)
	}

}
