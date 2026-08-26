class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int result[] = new int[n];
        
        int positive_idx = 0; // Starts at 0 for positive numbers
        int negative_idx = 1; // Starts at 1 for negative numbers
        
        for (int i = 0; i < nums.length; i++) {
            // Check if the number is positive instead of even
            if (nums[i] > 0) {
                result[positive_idx] = nums[i];
                positive_idx += 2;
            } else {
                result[negative_idx] = nums[i];
                negative_idx += 2;
            }
        }
        return result;
    }
}
