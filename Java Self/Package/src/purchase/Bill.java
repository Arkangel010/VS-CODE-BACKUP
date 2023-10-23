package purchase;

public class Bill {
	private int billId;
	private static int customerId = 1000;
	private String customerName;
	private String Address;
	long[] contactNo;

	public static int getCustomerId() {
		return customerId;
	}

	public int getBillId() {
		return billId;
	}

	public String getCustomerName() {
		return customerName;
	}

	public String getAddress() {
		return Address;
	}

	public long[] getContactNo() {
		return contactNo;
	}

	protected Bill(int billId, String customerName, String Address, long... contactNo) {
		this.billId = billId;
		this.customerName = customerName;
		this.Address = Address;
		this.customerName = customerName;
		this.contactNo = contactNo;
		customerId++;
	}

}
