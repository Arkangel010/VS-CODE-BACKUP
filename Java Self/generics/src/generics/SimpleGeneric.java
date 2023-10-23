package generics;

public class SimpleGeneric<T> {
	private T obj;
	T showObjectType(T obj){
		System.out.println("The "+obj.getClass());
		return this.obj;
		
	}
	
}
