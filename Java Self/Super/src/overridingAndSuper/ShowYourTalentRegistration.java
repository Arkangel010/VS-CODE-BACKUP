package overridingAndSuper;

public class ShowYourTalentRegistration {

	public static void main(String[] args) {
		SingleEventRegistration intake = new SingleEventRegistration("Jenny", "SingandWin", 1);
		intake.registerEvent();
		System.out.println("Thank You"+" "+intake.getName()+ " for your participation.");
		System.out.println("You are participant no:"+intake.getParticipateNo());
		System.out.println("Your registration fee is:"+intake.getRegistrationFee()+"\n");
		
		
		SingleEventRegistration intake1 = new SingleEventRegistration("Hudson", "PlayAway", 2);
		intake1.registerEvent();
		System.out.println("Thank You"+" "+intake1.getName()+ " for your participation.");
		System.out.println("You are participant no:"+intake1.getParticipateNo());
		System.out.println("Your registration fee is:"+intake1.getRegistrationFee()+"\n");

		TeamEventRegistration intake2 = new TeamEventRegistration("Aura", "ShakeALeg", 5, 1);
		intake2.registerEvent();
		System.out.println("Thank You"+" "+intake2.getName()+ " for your participation.");
		System.out.println("You are participant no:"+intake2.getTeamNo());
		System.out.println("Your registration fee is:"+intake2.getRegistrationFee()+"\n");

	}

}
