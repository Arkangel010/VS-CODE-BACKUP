package poly;

public class Tester extends Registration  {
	public static void main(String[] args) {
		
	
	Registration  equip = new Registration("Kevin","MN9891N",new long[]{9452425421L,7676765252L});
	System.out.println("Customer Name:"+equip.getCustomerName());
	System.out.println("Passport no:"+equip.getPassportNo());
	long store =0;
	for (long element : equip.telephoneNoCollection) {
		long q = element;
		store = store+q;
		if(store == q)
		System.out.println("Telephone No:" +q);
		else {
			System.out.println("Alternative Telephone No:" +q);
			break;
		}
		
		
		
	}
	System.out.println(equip.getTelephoneNo());
	
	
	
	
	}
}
