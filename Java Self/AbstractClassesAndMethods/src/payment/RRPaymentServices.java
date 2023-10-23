package payment;

abstract public class RRPaymentServices {
	private double balance;
	private int customerId;
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public int getCustomerId() {
		return customerId;
	}
	public void setCustomerId(int customerId) {
		this.customerId = customerId;
	}
	
	RRPaymentServices(double balance,int customerId){
		this.balance = balance;
		this.customerId = customerId;
	}
	
	abstract void payBill(double amount);

}
