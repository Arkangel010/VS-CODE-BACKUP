package exercise;

public class Student {
	private int studentId;
	private String name;
	private int totalMarks;
	private Grade grade;
	private int schlorshipAmount;

	public int getStudentId() {
		return studentId;
	}

	public void setStudentId(int studentId) {
		this.studentId = studentId;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getTotalMarks() {
		return totalMarks;
	}

	public void setTotalMarks(int totalMarks) {
		this.totalMarks = totalMarks;
	}

	public int getSchlorshipAmount() {
		return schlorshipAmount;
	}

	public void setSchlorshipAmount(int schlorshipAmount) {
		this.schlorshipAmount = schlorshipAmount;
	}

	public Grade getGrade() {
		return grade;
	}

	public void setGrade(Grade grade) {
		this.grade = grade;
	}

	enum Grade {
		A, B, C, D, E;
	}

	public void calculateGrade() {
		if (totalMarks >= 250)
			grade = Grade.A;
		else if (totalMarks >= 200 && totalMarks < 250)
			grade = Grade.B;
		else if (totalMarks >= 175 && totalMarks < 200)
			grade = Grade.C;
		else if (totalMarks >= 150 && totalMarks < 175)
			grade = Grade.D;
		else
			grade = Grade.E;
	}
	
	public void calculateSchlorshipAmount() {
		switch (grade) {
		case A:
			this.schlorshipAmount = 5000;
			break;
		case B:
			schlorshipAmount = 4000;
			break;
		case C:
			schlorshipAmount = 3000;
			break;
		case D:
			schlorshipAmount = 2000;
			break;
		default:
			schlorshipAmount = 0;

		}

	}

}
