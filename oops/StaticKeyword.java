package oops;

import oops.A.B;
import oops.A.C;


public class StaticKeyword {
	
	static {
		System.out.println("Block1");
	}
	
	static {
		System.out.println("Block2");
	}

	public static void main(String[] args) {
		
		System.out.println("Main ");
		
		A objA = new A();
		B objB = objA.new B();
		
		C objC = new A.C();
		
	}

}
