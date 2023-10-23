package overridingAndSuper;

public class TeamEventRegistration extends EventRegistration {
	private int noOfParticipants;

	public int getNoOfParticipants() {
		return noOfParticipants;
	}

	public void setNoOfParticipants(int noOfParticipants) {
		this.noOfParticipants = noOfParticipants;
	}

	private int teamNo;

	public int getTeamNo() {
		return teamNo;
	}

	public void setTeamNo(int teamNo) {
		this.teamNo = teamNo;
	}

	public TeamEventRegistration(String name, String nameOfEvent, int noOfParticipants, int teamNo) {
		super(name, nameOfEvent);
		this.noOfParticipants = noOfParticipants;
		this.teamNo = teamNo;
	}

	void registerEvent() {
		String a = "ShakeALeg";
		String b = "SingandWin";
		String c = "PlayAway";
		String d = "Actathon";
		double ShakeALeg = 50;
		double SingandWin = 60;
		double Actathon = 80;
		double PlayAway = 100;

		if (super.getNameOfEvent().equals(a))
			super.setRegistrationFee(ShakeALeg * teamNo);
		else if (super.getNameOfEvent().equals(b))
			super.setRegistrationFee(SingandWin * teamNo);
		else if (super.getNameOfEvent().equals(c))
			super.setRegistrationFee(PlayAway * teamNo);
		else if (super.getNameOfEvent().equals(d))
			super.setRegistrationFee(Actathon * teamNo);
	}

}
