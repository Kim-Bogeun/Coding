#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    int n = triangle.size(); 
    
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
                        
            if(j <= n - i + 1){
                dp[i][j] += triangle[i+j-2][j-1];
            }
            
            dp[i][j] += max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    answer = dp[n][n];
    
    return answer;
}