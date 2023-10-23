package startcode;

import java.util.Scanner;

public class Start{
	public static void main(String args[]){
		Load ip=new Load(); 
		System.out.println("Welcome enter no's to add");
		//System.out.println("The sum is="+ip.z);//
		Scanner op = new Scanner(System.in);
		ip.a = op.nextInt();
		ip.b = op.nextInt();
		System.out.println("The sum 1st is="+ip.z);
		ip.add(20, 30);
		System.out.println("The sum 2nd is="+ip.z);
		ip.add2();
		System.out.println("The sum 3rd is="+ip.z);
		ip.z= ip.a + ip.b;
		System.out.println("The sum 4th is="+ip.z);
	} 
}