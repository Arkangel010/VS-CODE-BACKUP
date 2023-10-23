package payment;

 class CreditCardPayment extends RRPaymentServices {
	private static int counter = 1000;
	private String paymentId;
	private double cashBack;
	private double balanceDue;
	
	
	
	public String getPaymentId() {
		return paymentId;
	}



	public double getCashBack() {
		return cashBack;
	}



	public double getBalanceDue() {
		return balanceDue;
	}


	
	CreditCardPayment(double balance,int customerId){
		super(balance,customerId);
	}
	@Override  	
	void payBill(double amount){
		
		if (amount> super.getBalance()) {
			System.out.println("Customer Id  :\t"+getCustomerId());
			counter++;
			paymentId = "c" + counter;
			this.paymentId = paymentId;
			System.out.println("Payment Id   :\t"+paymentId);
			System.out.println("Previous Due :\t"+super.getBalance());
			System.out.println("Remaining Due: 0\t");
			cashBack = amount - super.getBalance();
			System.out.println("CashBack wallet Balance:\t"+cashBack+"\n");
			
	}
	
		else if(amount< super.getBalance()) {
			System.out.println("Customer Id  :\t"+getCustomerId());
			counter++;
			paymentId = "c" + counter;
			this.paymentId = paymentId;
			System.out.println("Payment Id   :\t"+paymentId);
			System.out.println("Previous Due :\t"+super.getBalance());
			balanceDue = super.getBalance() - amount;
			System.out.println("Remaining Due:\t"+balanceDue);
			cashBack = 0;
			System.out.println("CashBack wallet Balance:\t"+cashBack+"\n");
	}


}
}
