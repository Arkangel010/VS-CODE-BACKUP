package Java.static_Keyword;
//We cannot access a non - static variable in a static method, but we can access static variable inside a non - static method.

public class Basics {
    static int Class = 10;
    String name;

    public static void print(){
        System.out.println(Class);
    }

    static{ //static block, called even before object creation.
        System.out.println("hi");
    }

    public static void main(String[] args) {
        //System.out.println(Basics.Class);
        //Basics.print(); 


    }

}
