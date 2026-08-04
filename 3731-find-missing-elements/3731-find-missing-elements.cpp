class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        int last=nums.back();
        int start=nums[0];
        int i=0;
        while(start<last){
            if(nums[i]!=start){
                result.push_back(start);
            }
            else{
                i++;
            }
            start++;
        }
        return result;
    }
};