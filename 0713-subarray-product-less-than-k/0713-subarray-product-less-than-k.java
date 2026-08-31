class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if (k <= 1) return 0;
        int n=nums.length;
        int i=0;
        int j=0;
        int mult=1;
        int result=0;

        while(j<n){
            mult*=nums[j];

            while(mult>=k){
                mult/=nums[i];
                i++;
            }
            result+=(j-i+1);
            j++;
        }
        return result;
    }
}