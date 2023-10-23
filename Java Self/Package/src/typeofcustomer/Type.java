package typeofcustomer;

import purchase.Bill;

public class Type extends Bill {
	protected int amount;
	
	protected int discount;
	


	public int getAmount() {
		return amount;
	}



	public int getDiscount() {
		return discount;
	}



	public Type(int billId, String customerName, String Address, String MOP, String TOC,int amount,int discount, long ... contactNo) {
		super(billId, customerName, Address, contactNo);
		this.discount = discount;
		if (TOC.equalsIgnoreCase("Regular")) {
			if (MOP.equalsIgnoreCase("Cash"))
				this.amount = (amount + 150);
			else if(MOP.equalsIgnoreCase("Card"))
				this.amount = amount;
		}
		else if (TOC.equalsIgnoreCase("privileged"))
			if (MOP.equalsIgnoreCase("Cash"))
				this.amount = amount - ((amount*discount)/100);
			else if(MOP.equalsIgnoreCase("Card"))
				this.amount = amount - ((amount*discount)/100);
			
	}

}
