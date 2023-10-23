package customer;
import typeofcustomer.*;
public class Execute  {
	public static void main(String[] args) {
			Type t1 = new Type(5001,"John","hi","cash","Regular",6000,0,200000L,4308983794L,8908902L);
	System.out.println("BillId:\t"+t1.getBillId());
	System.out.println("CustomerId:\t"+Type.getCustomerId());
	System.out.println("CustomerName:\t"+t1.getCustomerName());
	int i = 0;
	for(long ele : t1.getContactNo()) {
		long t =ele;
		
		i++;
		System.out.println("Contact No"+i+":\t"+t);
	}
	System.out.println("Address:\t"+t1.getAddress());
	System.out.println("Discount:\t"+t1.getDiscount());
	System.out.print("Final Amount to be Paid:"+t1.getAmount());
	}
	
	

}
