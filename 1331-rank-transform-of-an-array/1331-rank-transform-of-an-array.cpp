class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int rank=1;
        unordered_map<int,int>mp;

        for(int x :temp){
            if (mp.find(x) == mp.end()) {
                mp[x] = rank++;
            }

        }
        vector<int>result;
        for(int i=0;i<arr.size();i++){
            result.push_back(mp[arr[i]]);
        }
        return result;
    }
};