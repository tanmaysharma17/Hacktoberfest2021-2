package oops;

class Cat {
	boolean hasFur;
	String breed , color ;
	int legs , eyes;
	
	public void walk() {
		System.out.println("Cat is walking");
	}
	
	public void description() {
		System.out.println("my cat has " + legs + " legs " + eyes + " eyes");
	}
	
}

class Dog {
	String breed ,  name ; 
	
	public void description() {
		System.out.println(breed);
	}
}

public class MainClass {

	public static void main(String[] args) {
	
		Cat cat1 = new Cat();
		Cat cat2 = new Cat();
		
//		cat1.legs = 4;
//		cat1.eyes = 2;
//		
//		cat2.legs = 5;
//		cat2.eyes = 3;
//		
//		cat1.description();
//		cat2.description();
//		
//		cat1.walk();
//		cat2.walk();
		
		Dog husky = new Dog();
		Dog poodle = new Dog();
		
		husky.breed = "husky";
		husky.description();

	}

}
