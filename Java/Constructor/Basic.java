package Java.Constructor;
 class Basic{
    private int a;
    Basic(){
        a = 18;
    }

    Basic(int a){
        this.a = a;
    }

    public int getA() {
        return a;
    }

    public static void main(String[] args) {
        Basic obj = new Basic(); // calling default constructor
        System.out.println(obj.getA());

        Basic obj1 = new Basic(5); // calling overloaded constructor
        System.out.println(obj1.getA());

    }


   
 }