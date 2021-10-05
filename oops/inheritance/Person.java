package oops.inheritance;

public class Person {
	
	protected String name;
	
	public Person(String name) {
		this.name = name;
		System.out.println("inside person constructor");
	}
	public void eat() {
		System.out.println("person " + name + " is eating");
	}
	
	public void  walk() {
		System.out.println("person " + name + " is walking");
	}
	
	public static void laughing() {
		System.out.println("person is laughing");
	}
	

}
