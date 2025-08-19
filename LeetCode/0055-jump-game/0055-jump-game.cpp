class Solution {
public:
    bool canJump(vector<int>& nums){
        int n = nums.size();

        if(n == 1){
            return true;
        }

        vector<int> dp(n, 0);
        dp[n-1] = true;

        for(int i = n-2; i >= 0; --i){
            for(int j = 0; j <= nums[i]; ++j){
                if(dp[i+j] == true){
                    dp[i] = true;
                    cout << dp[i] << "true!" << endl;
                    break;
                }
            }
        }
        
        return dp[0];
    }
};