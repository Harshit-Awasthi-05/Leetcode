class Solution {
public:
    int getDigSum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    };

    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int>afterSorted=nums;
        auto lambda =[&](int n1, int n2){
            int digSum1=getDigSum(n1);
            int digSum2=getDigSum(n2);
            if (digSum1!=digSum2){
                return digSum1 < digSum2;
            }
            return n1 < n2;
        };

        sort(begin(afterSorted),end(afterSorted),lambda);

        unordered_map<int,int>valToIdx;
        for(int i=0;i<n;i++){
            valToIdx[nums[i]]=i;
        }

        int swapCount=0;
        for(int i=0;i<n;i++){
            int expectedVal=afterSorted[i];
            int currVal=nums[i];

            if (expectedVal==currVal) continue;

            int idx=valToIdx[expectedVal];

            nums[i]=expectedVal;
            nums[idx]=currVal;

            valToIdx[expectedVal]=i;
            valToIdx[currVal]=idx; 

            swapCount++;
        }
        return swapCount;
    }
};