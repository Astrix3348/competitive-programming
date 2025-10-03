

import java.util.Scanner;

public class Anton {
	
	public static void function() {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int count = 0;
		
		String[] str = new String[n];
		
		for(int i=0; i<n; i++) {
			str[i] = s.next();

		}	
		for(int i=0; i<str.length; i++) {
			if(str[i].equalsIgnoreCase("Tetrahedron")) {
				count += 4;
			}
			else if(str[i].equalsIgnoreCase("Cube")) {
				count += 6;
			}
			else if(str[i].equalsIgnoreCase("Octahedron")) {
				count += 8;
			}
			else if(str[i].equalsIgnoreCase("Dodecahedron")) {
				count += 12;
			}
			else {
				count += 20;
			}
		}
		System.out.println(count);
	}
	
	public static void main(String[] args) {
		function();
	}

}
