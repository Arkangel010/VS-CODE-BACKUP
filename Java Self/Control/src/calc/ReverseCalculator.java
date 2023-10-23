package calc;



public class ReverseCalculator {
	public static void main(String[] args) {
		
		//1. rem = i%10
		//2. rev = rev*10 + rem
		//3. i = i/10
		int num = 870435;
		int rev = 0;
		int index = 0;
		while(num>0) {
			int rem = num%10;
			if(index%1==0)
				rev = rev*10 + rem;
			num = num/10;
			index++;
			
		}
		System.out.println("reverse is " + rev );
		int i = 98574;
		int a = i/10000;
		int b = i/1000;
		int c = i/100;
		int d = i/10;
        int e = i%10;
        int s;
        int r;
        int q = 34;
        while(c>10) {
        	d -= 10*c;
        	c -= 10*b;
        	b -= 10*a;
        	
        }
        
        
        for (int v= q;q>10;) {
        	  r = v/10;
        	  s = v%10;
        	  System.out.println("the reverse through for loop:"+s+""+r);
        	  break;
        }
        	 
        	 System.out.println("the reverse through while:"+e+""+d+""+c+""+b+""+a);

        
}
}