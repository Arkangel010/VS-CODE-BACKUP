package rwefsaf;

public class Student {
	 private int studentId;
	    private String studentName;
	    
	    public Student(int studentId,String studentName)
	    {
	        this.studentId=studentId;
	        this.studentName=studentName;
	    }
	    public String toString()
	    {
	        return "Student: Id = " + studentId + " Name = " + studentName;
	    }
}

