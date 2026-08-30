class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        unordered_set<int>st;
        int n=nums.size();
        while(j<n){
            if (abs(j-i)>k){
                st.erase(nums[i]);
                i++;
            }

            if (st.contains(nums[j])){
                return true;
            }else{
                st.insert(nums[j]);
            }
            j++;
        }
        return false;
    }
};