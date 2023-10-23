package com.infy.object;

public class StudentRegistration {
	private String studentName;
	private double age;
	private int admissionNumber;
	private int rollNumber;
	private int counter = 1001;
	public String getStudentName() {
		return studentName;
	}
	public void setStudentName(String studentName) {
		this.studentName = studentName;
	}
	public double getAge() {
		return age;
	}
	public void setAge(double age) {
		this.age = age;
	}
	public int getAdmissionNumber() {
		return admissionNumber;
	}
	public void setAdmissionNumber(int admissionNumber) {
		this.admissionNumber = admissionNumber;
	}
	public int getRollNumber() {
		return rollNumber;
	}
	public void setRollNumber(int rollNumber) {
		this.rollNumber = rollNumber;
	}
	public int getCounter() {
		return counter;
	}
	public void setCounter(int counter) {
		this.counter = counter;
	}
	
	StudentRegistration (String studentName,double age,int admissionNumber){
		this.studentName = studentName;
		this.age = age;
		this.admissionNumber = admissionNumber;
		
	}
	public void generateRollNumber() {
		
	}
	
	

}
