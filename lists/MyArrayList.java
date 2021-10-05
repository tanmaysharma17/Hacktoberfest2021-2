package lists;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class MyArrayList {

	public static void main(String[] args) {
		
		List<String> fruits = new LinkedList<>();
		
		fruits.add("Apple");
		fruits.add("Orange");
		fruits.add("Grape");
	
		
		for(String e: fruits) {
			System.out.println(e);
		}
	}
}
