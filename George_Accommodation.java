package DSA;

import java.util.Scanner;

public class George_Accommodation {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		int live = 0;
		int n = s.nextInt();
		for(int i=0; i<n; i++) {
			int p = s.nextInt();
			int q = s.nextInt();
			if((q-p) >= 2){
				live++;
			}
		}
		System.out.println(live);
	}

}
