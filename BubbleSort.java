package DSA;

public class BubbleSort {
	public static void main(String[] args) {
		int nums[] = {6, 5, 2, 8, 9, 4};
		int temp = 0;
		
		
		System.out.println("Before");
		for(int e : nums) {
			System.out.print(e + " ");
		}
		System.out.println();
		
		
		for(int i=0; i<nums.length-1; i++) {
			for(int j=0; j<nums.length-i-1; j++) {
				if(nums[j] > nums[j+1]) {
					temp = nums[j];
					nums[j] = nums[j+1];
					nums[j+1] = temp;
				}
			}
		}
		
		
		
		System.out.println("After");
		for(int e : nums) {
			System.out.print(e + " ");
		}
	}

}
