package book;

public class Tester {
	public static void main(String[] args) {
		RoomDetails bill = new RoomDetails("Raju", "Standard", 0, 3);	
		bill.getBillId();
		System.out.println("Customer Name:\t"+bill.getCustomerName());
		System.out.println("No of Days of Stay:\t"+bill.getNoOfDaysOfStay());
		System.out.println("Total Bill:\t"+bill.calculateBill());
	}
	
	
	
}
