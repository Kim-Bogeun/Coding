class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int max_profit = 0;

        int min = INT_MAX;

        for(int i = 0; i < n; ++i){
            if(prices[i] < min){
                min = prices[i];
                int max = min;

                for(int j = i; j < n; ++j){
                    if(prices[j] > max){
                        max = prices[j];
                    }
                }

                if(max - min > max_profit){
                    max_profit = max - min;
                }
            }    
        }

        return max_profit;
    }
};