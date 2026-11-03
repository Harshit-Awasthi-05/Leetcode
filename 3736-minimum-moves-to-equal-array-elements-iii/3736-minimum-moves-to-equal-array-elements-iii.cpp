class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(begin(nums),end(nums));
        int result=0;
        for(int i=0;i<nums.size();i++){
            result+=(maxi-nums[i]);
        }
        return result;
    }
};