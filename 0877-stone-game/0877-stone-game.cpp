class Solution {
private:
    vector<vector<int>> memo;

    int maxDifference(vector<int>& piles, int left, int right) {
        if(left > right) {
            return 0;
        }

        if (memo[left][right] != -1) {
            return memo[left][right];
        }

        int pickLeft = piles[left] - maxDifference(piles, left + 1, right);
        int pickRight = piles[right] - maxDifference(piles, left, right - 1);

        return memo[left][right] = max(pickLeft, pickRight);
    }

public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        memo.assign(n, vector<int>(n, -1));
        
        return maxDifference(piles, 0, n - 1) > 0;
    }
};