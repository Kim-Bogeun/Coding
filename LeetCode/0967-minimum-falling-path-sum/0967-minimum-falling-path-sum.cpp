class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        cout << m << n << endl;

        vector<vector<int>> dp(m, vector<int>(n+2, INT_MAX));

        for(int j = 1; j <= n; ++j){
            dp[0][j] = matrix[0][j-1];
        }
                
        for(int i = 1; i < m; ++i){
            for(int k = 1; k <= n; ++k){
                dp[i][k] = matrix[i][k-1] + min({dp[i-1][k-1], dp[i-1][k], dp[i-1][k+1]});
            }
            cout << dp[i][1] << endl;
        }
    
        int min = dp[m-1][0];

        for(int i = 1; i <= n; ++i){
            if(dp[m-1][i] < min){
                min = dp[m-1][i];
            }
        }

        return min;
    }
};