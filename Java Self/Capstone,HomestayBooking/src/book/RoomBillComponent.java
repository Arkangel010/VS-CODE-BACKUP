package book;

public interface RoomBillComponent {
	double TAX = 12/100;
	double EXTRA_PERSON_CHARGE = 500d;
	double FOOD_CHARGE = 800d ;
	
	float calculateBill();
	
}
