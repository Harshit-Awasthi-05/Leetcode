class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int>ans;
    int start=nums[0];
    int last=nums.back();
    int i=0;
    while(start < last){
        if (nums[i]!=start){
            ans.push_back(start);
        }else i++;
        start++;
    }
    return ans;

    }
};