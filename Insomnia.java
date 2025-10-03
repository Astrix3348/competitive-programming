

import java.util.Scanner;

public class Insomnia {
	
	public static void function() {
		Scanner s = new Scanner(System.in);
		int k,l,m,n,d;
		k = s.nextInt(); // punched
		l = s.nextInt(); // tail shut to balcony
		m = s.nextInt(); // paws with sharp heels
		n = s.nextInt(); // threatened 
		d = s.nextInt(); // total
		
		int count=0;
		
		int[] arr = new int[d+1];
		for(int i=1; i<=d; i++) {
			arr[i] = 1;
			if(i%k==0 || i%l==0 || i%m==0 || i%n==0) {
				arr[i] = 0;
			}
			if(arr[i]==0) {
				count++;
			}
			
		}
		System.out.println(count);
	
	}
	
	public static void main(String[] args) {
		function();
	}

}
