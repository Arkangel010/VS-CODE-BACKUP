package constructor;

public class Chocolate {
	private int barCode;
	public int getBarCode() {
		return barCode;
	}
	public void setBarCode(int barCode) {
		this.barCode = barCode;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getWeight() {
		return weight;
	}
	public void setWeight(int weight) {
		this.weight = weight;
	}
	private String name;
	private int weight;
	private int cost;
	
	public int getCost() {
		return cost;
	}
	public void setCost(int cost) {
		this.cost = cost;
	}
	Chocolate(){
		barCode = 101;
		name = "Cadbury";
		weight = 12;
		 cost = 10;
	}
	
	public static void main(String[] args) {
		Chocolate reset = new Chocolate();
		reset.setBarCode(102);
		reset.setCost(50);
		reset.setName("Hershey's");
		reset.setWeight(24);
		
		System.out.println("BarCode:"+" "+reset.getBarCode());
		System.out.println("   Name:"+" "+reset.getName());
		System.out.println(" weight:"+" "+reset.getWeight());
		System.out.println("   cost:"+" "+reset.getCost());
		
		
	}
	
	
	
	

}
