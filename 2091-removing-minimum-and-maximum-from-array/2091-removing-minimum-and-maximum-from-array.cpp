class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if (nums.size()==1){
            return 1;
        }
        int  maxi=INT_MIN;
        int max_idx=-1;
        int mini=INT_MAX;
        int min_idx=-1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if (nums[i]>maxi){
                maxi=max(maxi,nums[i]);
                max_idx=i;
            }
            if(nums[i]<mini){
                mini=min(mini,nums[i]);
                min_idx=i;
            }
        }
        if (min_idx == max_idx) { return 1; }
         int left = min(min_idx, max_idx); 
         int right = max(min_idx, max_idx); 
         int option1 = right + 1; 
         
         int option2 = n - left; 
         
         int option3 = (left + 1) + (n - right); 
         return min({option1, option2, option3});
    }
};