

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Letters {
	
	public static void function() {
		Scanner s = new Scanner(System.in);
		Set<Character> al = new HashSet<>();
		
		String str = s.nextLine();
		for(char c : str.toCharArray()) {
			if(Character.isLetter(c)) {
			   al.add(c);
			}
		}
		
		System.out.println(al.size());
		
		
	}
	
	public static void main(String[] args) {
		function();
	}

}
