package display;

public class Bill {

	public static void main(String[] args) {
		
		Backend il = new Backend(7,100,2,400);
		
//		il.main(7, 100, 2, 400);
		System.out.println("Billid: \t"    + il.billId);
		System.out.println("customerId:\t"+ il.customerId);
		
		System.out.println("discount:\t"  +(int)il.discount +"%");
		il.display();

	}
}
