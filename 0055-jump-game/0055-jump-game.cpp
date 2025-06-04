class Solution {
public:
    bool canJump(vector<int>& nums){
        int n = nums.size();

        if(n == 1){
            return true;
        }

        vector<int> dp(n, 0);
        dp[n-1] = n;

        for(int i = n-2; i >= 0; --i){
            int far = min(n-1, i + nums[i]);
            for(int j = i+1; j <= far; ++j){
                if(dp[j]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};