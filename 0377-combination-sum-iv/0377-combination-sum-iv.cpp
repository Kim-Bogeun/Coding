class Solution {
public:
    unsigned long long combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long> dp(target + 1, 0);
        dp[0] = 1;

        for(int i = 1; i <= target; ++i){
            long long count = 0;

            for(int num : nums){
                if(num <= i){
                    count += dp[i - num];
                }
            }

            dp[i] = count;
        }

        return dp[target];
            
        }
};