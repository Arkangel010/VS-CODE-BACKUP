package employee;

public class EmployeeRecord extends ContractEmployee{
	
	public static void main(String[] args) {
		PermanentEmployee perma = new PermanentEmployee() ;
		ContractEmployee cont = new ContractEmployee() ;
		
		perma.setName("Anil");
		perma.setEmpId(101);
		perma.setBasicPay(10000);
		perma.setHra(1500);
		perma.setExperience(3);
		perma.calculateSalary();
		System.out.println("Permanent employee: Your salary is: "+perma.salary);

		
		
		cont.setName("Ankit");
		cont.setEmpId(102);
		cont.setWages(500);
		cont.setHours(10);
		cont.calculateSalary();
		System.out.println("Contract employee: Your salary is: "+cont.Salary);
		
		
	}

}
