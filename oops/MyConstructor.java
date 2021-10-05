package oops;

class Vehicle{
	int wheels;
	int headlamps;
	String color;
	Vehicle(int wheels ,int headlamps ){
		this.wheels = wheels;
		this.headlamps = headlamps;
	}
	
	Vehicle(int wheels , String color ){
		this.wheels = wheels;
		this.color = color;
	}
}
public class MyConstructor {
	 MyConstructor() {
		System.out.println("Object is created");
	}

	public static void main(String[] args) {
		
		//MyConstructor obj =  new MyConstructor();
		
		Vehicle car = new Vehicle(4,2);
		Vehicle scooty = new Vehicle(2, "Yellow");
		System.out.println(car.wheels + " wheels and " + car.headlamps + " headlamps");
		System.out.println(scooty.wheels + " wheels and " + scooty.color + " color");
		
		
		
		

	}

}
