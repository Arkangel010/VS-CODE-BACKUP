package com.infy.assignment.exceptionhandling;

public class EmployeeService {
	public void checkEmployeeSalary(Employee emp) {
		try {
			if (emp < 1000)
				throw new EmpSalaryException("invalid");
		} catch (EmpSalaryException f) {
			System.out.println(f);
		}

	}
	public static void main(String[] args) {
		Employee e1 = new Employee("Joe Smith",20,5345);
		Employee e2 = new Employee("Lewis Jane",21,1345);
		Employee e3 = new Employee("Larry Page",22,245);
		Employee e4 = new Employee("Smith James",23,945);
		Employee e5 = new Employee("Elvis George",25,1425);
	
		EmployeeService empser=new EmployeeService();
		Employee[] emparray={e1,e2,e3,e4,e5};
		for (Employee employee : emparray) {
			empser.checkEmployeeSalary(employee);
		}
	
	
	}
	
	
	
}
