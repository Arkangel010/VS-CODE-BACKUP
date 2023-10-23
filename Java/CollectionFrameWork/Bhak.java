package Java.CollectionFrameWork;
import java.util.ArrayList;
import java.util.concurrent.*;;
public class Bhak {
    public static void main(String[] args) {
        CopyOnWriteArrayList arr = new CopyOnWriteArrayList();
    arr.add(100);
    arr.add(200);
    arr.add(300);

    for(Object x: arr){
        System.out.println(x);
        arr.add(400);
    }

    // Iterator itr = arr.interator();
    // while(itr.hasNext()){
    //     System.out.println(itr.next());
    //     arr.add(400);
    // }
    }


    


}
