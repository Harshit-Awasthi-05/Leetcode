class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long strength = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                long long g = __gcd(nums[i], nums[j]);
                long long mul = 1LL * nums[i] * nums[j];

                strength = max(strength, mul / (g * g));
            }
        }

        return strength;
    }
};