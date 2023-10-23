package payment;

public class ShoppingPayment extends RRPaymentServices {
	private static int counter = 1000;
	private String paymentId;

	public String getPaymentId() {
		return paymentId;
	}

	ShoppingPayment(int customerId, double balance) {
		super(balance, customerId);

	}

	@Override
	public void payBill(double amount) {
		if (amount > super.getBalance()) {
			System.out.println("Excess amount enetered!!Please try again.\n");

		} else if(amount == super.getBalance())  {
			
			counter++;
			paymentId = "S" + counter;
			this.paymentId = paymentId;
			
			
			System.out.println("Congratulation!! Your payment of "+ amount +" is successful with payment id "+getPaymentId()+"\n");
			
			

		}
		
		else if (amount < super.getBalance()) {
			System.out.println("Customer Id  :\t"+getCustomerId());
			counter++;
			paymentId = "c" + counter;
			this.paymentId = paymentId;
			System.out.println("Payment Id   :\t"+paymentId);
			System.out.println("Previous Due :\t"+super.getBalance());
			amount = super.getBalance() - amount;
			System.out.println("Remaining Due:\t"+amount+"\n");
		}

	}

}
