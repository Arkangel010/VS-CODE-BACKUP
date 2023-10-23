package overridingAndSuper;

public class EventRegistration {
	private String name;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	private String nameOfEvent;
	
	public String getNameOfEvent() {
		return nameOfEvent;
	}
	public void setNameOfEvent(String nameOfEvent) {
		this.nameOfEvent = nameOfEvent;
	}
	private double registrationFee;

	public double getRegistrationFee() {
		return registrationFee;
	}
	public void setRegistrationFee(double registrationFee) {
		this.registrationFee = registrationFee;
	}
	void registerEvent(){
		
		int ShakeALeg = 100;
		int SingandWin = 150;
		int Actathon = 70;
		int PlayAway = 130;
		
	}
	EventRegistration(){
	}
	
	
	EventRegistration(String name,String nameofEvent) {
		
		this.name = name; 
		this.nameOfEvent = nameofEvent ;
		
	}
	@Override
	public String toString() {
		return "EventRegistration [name=" + name + ", nameOfEvent=" + nameOfEvent + ", registrationFee="
				+ registrationFee + "]";
	}

}
