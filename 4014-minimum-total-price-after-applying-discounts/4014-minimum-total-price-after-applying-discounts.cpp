class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
     double result=0;
     sort(prices.begin(),prices.end(),greater<int>());
     sort(discounts.begin(),discounts.end(),greater<int>());
    
        int k = min(prices.size(), discounts.size());

        for (int i = 0; i < k; i++) {
            result += prices[i] * (100.0 - discounts[i]) / 100.0;
        }

        for (int i = k; i < prices.size(); i++) {
            result += prices[i];
        }
     return result;   
    }
};