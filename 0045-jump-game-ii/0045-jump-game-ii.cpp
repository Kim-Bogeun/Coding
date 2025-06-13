class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        if(n == 1){
            return 0;
        }

        vector<int> dp(n, 9999999);
        dp[n-1] = 0;

        for(int i = n-2; i >= 0; --i){
            for(int j = 1; j <= nums[i] && i + j < n; ++j){
                dp[i] = min(dp[i], dp[i + j] + 1);
            }
        }

        return dp[0];
    }
};