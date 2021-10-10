

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static long gcd(long a,long b)
    {
        if(a==0)
          return b;
      return gcd(b%a,a);
    }
    
    
    public static long lcm(long a,long b)
    {
        return a*b/(gcd(a,b));
    }
    
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
	    for(long i=0;i<t;i++)
	    {
	        long a=sc.nextLong();
	        long b=sc.nextLong();
	        System.out.println(lcm(a,b)+" "+gcd(a,b));
	       
	    }
	}
}
