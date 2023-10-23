package Java.String;
class Basics{
   
    public static void main(String[] args) {
        String m = "hi";
        String n = "hi";
        String o = new String("Dynamic");
        System.out.println(m == n); // == , compares the address,same memory address, no duplicates
        System.out.println(m == o); // different memory address
        
        String p = new String("hi");
        System.out.println(o == p);// duplicates

        System.out.println(m.equals(n)); // .equals() compares the values, not references.
        
        m =  m.concat(o);
        System.out.println(m);
        
        m = "roc";
        int l = m.length() -1;
        boolean flag = false;
        for(int i = 0; i < l; i++){
            if(m.charAt(i) != m.charAt(l)){
            System.out.println("Not a palindrome!");
            flag = true;
            break;
            }
            l--;
        }
        if(flag == false)
        System.out.println("Palindrome!");

        
        
           
        
    }   
}