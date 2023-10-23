
public class Backend {
	private String Test;
	private int StudentId;
	private String Name;
	private float QualifyingMarks;
	private char ResidentialStatus;
	private int YearOfEngennering;

	public int getStudentId() {
		return StudentId;
	}

	public void setStudentId(int StudentId) {
		this.StudentId = StudentId;
	}
	
	public String getName() {

		return Name;
	}

	public void setName(String Name) {

		this.Name=Name;
	}

	public float getQualifyingMarks() {
		return QualifyingMarks;
	}

	public void setQualifyingMarks(float QualifyingMarks) {
		this.QualifyingMarks = QualifyingMarks;
	}

	public char getResidentialStatus() {
		return ResidentialStatus;
	}

	public void setResidentialStatus(char ResidentialStatus) {
		this.ResidentialStatus = ResidentialStatus;
	}

	public int getYearOfEngennering() {
		return YearOfEngennering;
	}

	public void setYearOfEngennering(int YearOfEngennering) {

			this.YearOfEngennering=YearOfEngennering;
	}
}