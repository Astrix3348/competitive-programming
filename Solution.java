package DSA;

import java.util.Scanner;

public class Solution {
    public static int numWaterBottles(int numBottles, int numExchange) {

        int empty = numBottles;
        int totalDrank = numBottles;
        
        while (empty >= totalDrank) {
            int newBottles = empty/numExchange;
            totalDrank += newBottles;
            empty = (empty % numExchange) + newBottles;
            
        }
   
        	return totalDrank;
              
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int numBottles = s.nextInt();
        int numExchange = s.nextInt();

        System.out.println(numWaterBottles(numBottles, numExchange));
        
        s.close();

    }
}
