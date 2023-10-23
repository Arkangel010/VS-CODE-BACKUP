package book;

public class RoomDetails implements RoomBillComponent {
	int billId = 101;
	private String CustomerName;
	private String typeOfRoom;
	private int noOfExtraPersons;
	private int noOfDaysOfStay;
	static int counter;

	RoomDetails(String customerName, String typeOfRoom, int noOfExtraPerson, int noOfDaysStay) {
		this.CustomerName = customerName;
		this.typeOfRoom = typeOfRoom;
		this.noOfDaysOfStay = noOfDaysStay;
		this.noOfExtraPersons = noOfExtraPerson;
	}

	int getBillId() {
		counter = billId;
		counter++;
		System.out.println("BillID:\t" + counter);
		return counter;
	}

	public String getCustomerName() {
		return CustomerName;
	}

	public String getTypeOfRoom() {
		return typeOfRoom;
	}

	public int getNoOfExtraPersons() {
		return noOfExtraPersons;
	}

	public int getNoOfDaysOfStay() {
		return noOfDaysOfStay;
	}

	boolean validateNoOfExtraPerson() {

		return noOfExtraPersons <= 2 && noOfExtraPersons > 0;
	}

	boolean validateTypeOfRoom() {

		return typeOfRoom.equals("Standard") || typeOfRoom.equals("Deluxe") || typeOfRoom.equals("Cottage");
	}

	boolean validateNoOfDays() {
		return true;
	}

	@Override
	public float calculateBill() {
		validateNoOfDays();

		validateNoOfExtraPerson();
		if (validateNoOfExtraPerson() == false) {
			System.out
					.println("We don't accept more than 2 Extra Persons in a Room!!! \n"
							+ "Kindly Book an additional Room.");
			System.exit(0);
		}
		validateTypeOfRoom();
		if (validateTypeOfRoom() == false) {
			System.out.println("Enter a valid Room Type!!");
			System.exit(0);
		}
		float totalBill = 0;
		if (typeOfRoom.equalsIgnoreCase("Standard")) {
			totalBill = (float) ((noOfDaysOfStay * 2500) + noOfDaysOfStay * (FOOD_CHARGE)
					+ (EXTRA_PERSON_CHARGE * noOfExtraPersons));

		}

		else if (typeOfRoom.equalsIgnoreCase("Deluxe")) {
			totalBill = (float) ((noOfDaysOfStay * 3500) + noOfDaysOfStay * (FOOD_CHARGE)
					+ (EXTRA_PERSON_CHARGE * noOfExtraPersons));
		}

		else if (typeOfRoom.equalsIgnoreCase("Cottage")) {
			totalBill = (float) ((noOfDaysOfStay * 5500) + noOfDaysOfStay * (FOOD_CHARGE)
					+ (EXTRA_PERSON_CHARGE * noOfExtraPersons));

		}
		totalBill = totalBill + (float) TAX * totalBill;
		return totalBill;

	}
}