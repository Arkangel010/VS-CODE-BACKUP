package constructor;

public class Chocolate2 {
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
	Chocolate2(){
		barCode = 101;
		name = "Cadbury";
		weight = 12;
		 cost = 10;
	}
	
	Chocolate2(int a,String b,int c,int d){
		this.barCode = a;
		this.name = b;
		this.weight = c;
		this.cost = d;
	}
	
	
	public static void main(String[] args) {
		Chocolate2 reset = new Chocolate2();
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
