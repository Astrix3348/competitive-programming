

import java.util.Arrays;
import java.util.Scanner;

public class Joke {
	
	public static void function() {
		Scanner s = new Scanner(System.in);
		
		String s1 = s.next();
		String s2 = s.next();
		String mix = s.next();
	
		char[] arr = mix.toCharArray();
		
		String new_String = s1 + s2;
		char[] new_arr = new_String.toCharArray();
		
		Arrays.sort(arr);
		Arrays.sort(new_arr);
		
		String new_sorted = new String(new_arr);
		String sorted = new String(arr);
		
		if(sorted.equalsIgnoreCase(new_sorted)) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}

		s.close();
}
	
	public static void main(String[] args) {
		function();
	}

}
