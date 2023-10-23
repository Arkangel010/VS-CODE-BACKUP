package display;

public class Backend {
	int billId;
	int customerId;
	double discount;
	double billamount;
	
	public Backend (int billId,int customerId,double discount,double billamount ) {
		this.billamount = billamount;
		this.billId = billId;
		this.customerId = customerId ;
		this.discount = discount;
	}

//	void main(int a, int b, double c, double d) {
//		billId = a;
//		customerId = b;
//		discount = c;
//		billamount = d;
//
//	}

	double display() {

		double g = billamount * (discount / 100);
		double f = billamount - g;
		System.out.println("Billamount:\t"+f);
		return discount;

	}

}