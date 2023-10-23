package infy.string;

public class LocationChanger {
	private String name;
	private String location;

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getLocation() {
		return location;
	}

	public void setLocation(String location) {
		this.location = location;
	}

	int index;
	String string = new String();

	String[] sirsname = { "hi", "bye", "nai" };
	int[] eirsname = { 1,9,4 };

	public void welcomeEmployee(String name) {
		this.name = name;
		this.index = name.indexOf(" ");
		String k = name.substring(0,index);
		System.out.println(k);
		char[] firstname = new char[index];
		name.getChars(0, index, firstname, 0);
		for (int i =0;i<=index;i++) {
			System.out.print(firstname);
		}
		System.out.print("\n"+sirsname);
		System.out.print(eirsname);
		}

	

	public void checkCity(String location) {
		this.location = location;
		String city = location.substring(location.indexOf(",")+1, location.lastIndexOf(","));
		if (city.equalsIgnoreCase("Delhi"))
			System.out.println("Welcome to Infy Mysore Delhities!");
		
		else if(city.equalsIgnoreCase("Trivandrum"))
			System.out.println("Welcome to MyDC people of Trinfy!");
		
		else if (city.equalsIgnoreCase("Bhubaneshwar"))
			System.out.println("You came a long way down South! we welcome you!");
		else
			System.out.println("Oops your city is not listed!");
			

	}
	
	public void editAddress() {
		String Address = location.substring(location.lastIndexOf(",")+1, location.length());
		if(Address.equalsIgnoreCase("STP"))
			System.out.println("Your location has been changed from STP to SEZ.");
		else 
			System.out.println("Your location remains same!");
	}

}
