class Solution {
public:
    vector<int> xorQueries(vector<int>& nums, vector<vector<int>>& queries) {
       vector<int> result;
       int n = nums.size();
       vector<int> prefix(n, 0);
       
       prefix[0] = nums[0];
       for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] ^ nums[i];
       }

       for(auto &query : queries){
            int left = query[0];
            int right = query[1];
            if (left == 0) {
                result.push_back(prefix[right]);
            } else {
                result.push_back(prefix[right] ^ prefix[left - 1]);
            }
       }
       return result; 
    }
};
