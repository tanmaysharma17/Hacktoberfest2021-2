package oops.abstraction;

public class Audi extends Car {
	
	@Override
	public void accelerate() {
		System.out.println("Audi is accelerating");
	}
	
	public void breaking() {
		System.out.println("Audi is breaking");
	}
	
}
