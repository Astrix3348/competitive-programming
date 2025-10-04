

import java.util.*;

public class Police {
	
	public static void function() {
		Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();   // number of events
        int available = 0;      // available police officers
        int untreated = 0;      // untreated crimes

        for (int i = 0; i < n; i++) {
            int event = sc.nextInt();
            if (event == -1) {
                if (available > 0) {
                    available--;   // assign officer
                } else {
                    untreated++;   // crime untreated
                }
            } else {
                available += event; // hire new officers
            }
        }

        System.out.println(untreated);
    }

    public static void main(String[] args) {
        function();
    }
}
