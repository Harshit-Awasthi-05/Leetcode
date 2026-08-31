class Solution {
    public long countSubarrays(int[] nums, int k) {
        int max=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            max=Math.max(max,nums[i]);
        }
        //sliding window
        int i=0;
        int j=0;
        int countMax=0;
        long  result=0;

        while(j<n){
            if(nums[j]==max){
                countMax++;
            }

            while(countMax>=k){
                result+=n-j;

                if(nums[i]==max){
                    countMax--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
}