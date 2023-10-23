
public class Data {
	public static void main(String[] args) {
		Backend dat = new Backend();
		dat.setName("Rocky");
		dat.setQualifyingMarks(100);
		//dat.setResidentialStatus('Hostel');
		dat.setStudentId(007);
		dat.setYearOfEngennering(1947);
		
		
		System.out.println("Output:\n");
		
		System.out.println("Student Name       :\t"+dat.getStudentId());
		System.out.println("Student Id         :\t"+dat.getName());
		System.out.println("Qualifying marks   :\t"+dat.getQualifyingMarks());
		//System.out.println("Year of Engineering:\t"+dat.getResidentialStatus());
		System.out.println("Residential status :\t"+dat.getYearOfEngennering());
		
		
	}
}
