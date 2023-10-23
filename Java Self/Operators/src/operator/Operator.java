package operator;

class CalculateWithOperators {
	  public static void main (String[] args) {
	    int res = 1 + 2; // result is now 3
	    int srt = 1;
	    int brt = 8;
	    int ert = 7;
	    
	    System.out.println (res);
	    res-= srt; // result is now 2
	    srt++;
	    System.out.println (res);
	    res *= srt; // result is now 4
	    System.out.println(res);
	    res /=srt; // result is now 2
	    System.out.println(res);
	    res += brt; // result is now 10
	    System.out.println(res);
	    res %=ert; // result is now 3
	    System.out.println(res);
	  }
	}

