package Java.Inheritance.Interface;

public class Sum implements Basic{
      public int sum(){
        return 5;
    }
    public static void main(String[] args) {
        Sum obj = new Sum();
        System.out.println(obj.sum());
    }
}
