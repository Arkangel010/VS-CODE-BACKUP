package rwefsaf;

public class GenericsDemo {
	public static void main(String[] args)
    {
        Student s1 = new Student(101,"Robert");
        Record<Integer> integerRecord = new Record<Integer>(); //integerRecord can be used to display only integers
        integerRecord.display(12);
        //integerRecord.display(s1); will give an error as we are trying to add a student class object
        Record<Student> studentRecord = new Record<>();  //studentRecord can be used to display only Students
        studentRecord.display(s1);
        //studentRecord.display(15); will give an error as we are trying to add an integer
    }
}
