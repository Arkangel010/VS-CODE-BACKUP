package static1;

public class LoanTester    {
	public static void main(String[] args) {
		Loan intake = new Loan();
		intake.setAccountNo(1);
		intake.setCustomerNo(1);
		intake.setLoanAmount(10000f);
		intake.setLoanDuration(1);
		intake.setIntrest(2f);
		intake.setLoanNo(1);
		
		
		
		
		System.out.println(intake.getAccountNo());
		System.out.println(intake.getCustomerNo());
		System.out.println(intake.getLoanAmount());
		System.out.println(intake.getLoanDuration());
		System.out.println(intake.getIntrest());
		System.out.println(intake.getLoanNo()+"\n");
		
		Loan intake1 = new Loan(1,1,10000f,1,2f,1);
		System.out.println(intake1.getAccountNo());
		System.out.println(intake1.getCustomerNo());
		System.out.println(intake1.getLoanAmount());
		System.out.println(intake1.getLoanDuration());
		System.out.println(intake1.getIntrest());
		System.out.println(intake1.getLoanNo());
		System.out.println(Loan.getLoanCounter());
	}
}
