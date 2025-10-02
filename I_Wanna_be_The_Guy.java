package DSA;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class I_Wanna_be_The_Guy {
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    
	    Set<Integer> check = new HashSet<>();
	    
	    int n = s.nextInt();

	    int p = s.nextInt();
	    for(int i=0; i<p; i++) {
	    	check.add(s.nextInt());
	    }
	    
	    int q = s.nextInt();
	    for(int i=0; i<q; i++) {
	    	check.add(s.nextInt());
	    }
	 
	 
	    if(check.size() == n) {
	    	System.out.println("I become the guy.");
	    }
	    else {
	    	System.out.println("Oh, my keyboard!");
	    }
	   
	}

}
