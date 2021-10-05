package conditionalStatements;

public class NestedIfElse {
	
	public static void main(String[] args) {
		
		int a = 25;
		int b = 35;
		int c = 10;
		int result = 0;
		
//		if(a > b) {
//			if(a > c) {
//				result = a ;
//			} else {
//				result = c;
//				
//			}
//		}else {
//			if(b > c) {
//				result = b;
//			}else {
//				result = c; 
//			}
//		}
//		
//		System.out.println(result);
	
		result = a > b ? a > c ? a : c : b > c ? b : c ;
		
		System.out.println("Greatest number is " + result);

	}

}
