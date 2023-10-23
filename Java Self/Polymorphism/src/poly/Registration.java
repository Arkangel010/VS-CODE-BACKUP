package poly;

public class Registration {

	private String customerName;

	public String getCustomerName() {
		return customerName;
	}

	public void setCustomerName(String customerName) {
		this.customerName = customerName;
	}

	private String pancardNo;

	public String getPancardNo() {
		return pancardNo;
	}

	public void setPancardNo(String pancardNo) {
		this.pancardNo = pancardNo;
	}

	private String passportNo;

	public String getPassportNo() {
		return passportNo;
	}

	public void setPassportNo(String passportNo) {
		this.passportNo = passportNo;
	}

	private int voterId;

	public int getVoterId() {
		return voterId;
	}

	public void setVoterId(int voterId) {
		this.voterId = voterId;
	}

	private int lisenceNo;

	public int getLisenceNo() {
		return lisenceNo;
	}

	public void setLisenceNo(int lisenceNo) {
		this.lisenceNo = lisenceNo;
	}

	private long telephoneNo;

	public long getTelephoneNo() {
		return telephoneNo;
	}

	public void setTelephoneNo(long telephoneNo) {
		this.telephoneNo = telephoneNo;
	}

	long[] telephoneNoCollection = new long[2];

	Registration() {

	}

	Registration(String customeName, String passportNo, long[] tele  ) {
		this.customerName = customeName;
		this.passportNo = passportNo;

		//this.telephoneNoCollection[0]  =  telephoneNo1;
		//this.telephoneNoCollection[1]  =  telephoneNo2;
		this.telephoneNoCollection = tele;

	}

	Registration(String customeName, int lisenceNo, String pancardNo, long telephoneNo1, long telephoneNo2) {
		this.customerName = customeName;
		this.lisenceNo = lisenceNo;
		this.pancardNo = pancardNo;
		telephoneNo1 = telephoneNoCollection[0];
		telephoneNo2 = telephoneNoCollection[1];

	}

	Registration(String customeName, int voterId, int lisenceNo, long telephoneNo1, long telephoneNo2) {
		this.customerName = customeName;
		this.voterId = voterId;
		this.lisenceNo = lisenceNo;
		telephoneNo1 = telephoneNoCollection[0];
		telephoneNo2 = telephoneNoCollection[1];

	}

	Registration(String customeName, String pancardNo, int voterId, long telephoneNo1, long telephoneNo2) {
		this.customerName = customeName;
		this.pancardNo = pancardNo;
		this.voterId = voterId;
		telephoneNo1 = this.telephoneNoCollection[0];
		telephoneNo2 = this.telephoneNoCollection[1];
		

	}

	
	}


