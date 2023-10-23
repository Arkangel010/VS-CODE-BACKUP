package overridingAndSuper;

public class SingleEventRegistration extends EventRegistration {

	private int participateNo;

	public int getParticipateNo() {
		return participateNo;
	}

	public void setParticipateNo(int participateNo) {
		this.participateNo = participateNo;
	}

	SingleEventRegistration(String name, String nameofEvent, int participantsNo) {
		super(name, nameofEvent);
		this.participateNo = participantsNo;

	}
	//EventRegistration ob = new EventRegistration();

	void registerEvent() {
		
		String a = "ShakeALeg";
		String b = "SingandWin";
		String c = "PlayAway";
		
		int r = 100;
		int s = 150;
		int t = 130;
		
		
		
		if (super.getNameOfEvent().equals(a) ) {
			super.setRegistrationFee(r);
		}
		else if (super.getNameOfEvent().equals(b)) {
			super.setRegistrationFee(s);
		}
		else if (super.getNameOfEvent().equals(c)) {
			super.setRegistrationFee(t); 
		}
		
		

	}

}
