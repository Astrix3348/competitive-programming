package DSA;

import java.util.Scanner;

public class Lottery {
	
	public static void function() {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int count=0;
		
		while(n>0){
			if(n/100>0) {
				count++;
				n = n - 100;
			}
			else if(n/20>0) {
				count++;
				n -= 20;
			}
			else if(n/10>0) {
				count++;
				n -= 10;
			}
			else if(n/5>0) {
				count++;
				n -= 5;
			}
			else {
				count++;
				n -= 1;
			}		
		}
		System.out.println(count);
	}
	
	public static void main(String[] args) {
		function();
	}

}
