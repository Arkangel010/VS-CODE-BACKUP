package payment;

public class Tester {
	public static void main(String[] args) {
	ShoppingPayment sp = new ShoppingPayment(5001,10000.23d);
	
		sp.payBill(5000d);
		
	ShoppingPayment sp1 = new ShoppingPayment(561328,5000d);
		sp1.payBill(5000d);
	
	ShoppingPayment sp2 = new ShoppingPayment(561328,5000d);
		sp2.payBill(6000d);
	
	CreditCardPayment ccp =  new CreditCardPayment(10000.23d,5001);
	
	ccp.payBill(15000);
	
	CreditCardPayment ccp1 =  new CreditCardPayment(10000.23d,5001);
	
	ccp1.payBill(0);
	
	}
	
	
	
	
	
	
	
	
}
