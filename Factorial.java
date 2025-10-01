package DSA;

import java.util.Scanner;

public class Factorial {
	
	public static int fac(int n) {
		
		if(n==1 || n==0) {
			return 1;
		}
		else {
			return n * fac(n-1);
		}
		
		
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number : ");
		int n = s.nextInt();
		System.out.println(fac(n));
		
		s.close();
	}

}
