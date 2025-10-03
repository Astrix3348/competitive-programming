


import java.util.Scanner;

public class Arrival {
	
	public static void function() {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int[] arr = new int[n];
		
		for(int i=0; i<n; i++) {
			arr[i] = s.nextInt();
		}
		int count = 0;
		int max = 0;
		int min = 100;
		int max_idx = 0;
		int min_idx = 0;
		
		for(int i=0; i<n; i++) {
			
			if(arr[i]>max) {
				max = arr[i];
				max_idx = i;
			}
			if(arr[i]<=min) {
				min = arr[i];
				min_idx = i;
			}
		}
		
		count = max_idx + ((n-1) - min_idx);
		if(max_idx>min_idx) {
			count--;
		}
		
		System.out.println(count);
		
		
	}
	
	
	public static void main(String[] args) {
		function();
	}

}
