class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int result=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int>mySet;
            for(int j=i;j<n;j++){
                mySet.insert(nums[j]);
                int count=mySet.size();
                result+=(count*count);
            }
        }
        return result;
    }
};