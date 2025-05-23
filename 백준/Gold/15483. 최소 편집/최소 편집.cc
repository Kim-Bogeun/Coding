#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int levenshteinDistance(const std::string& s, const std::string& t) {
    int m = s.size();
    int n = t.size();

    // TODO 1: Initialize DP matrix (n+1) x (m+1)
    vector<vector<int>> dp(n+1, vector<int>(m+1));

    for(int i = 0; i <= n; ++i){
        dp[i][0] = i;
    }


    for(int j = 0; j <= m; ++j){
        dp[0][j] = j;
    }

    // TODO 2: Implement Levenshtein distance algorithm
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(t[i-1] == s[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }

            else{
                dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) + 1;
            }
        }
    }

    // TODO 3: Return the final answer
    return dp[n][m];
}

int main() {
    std::string s;
    cin >> s;
    std::string t;
    cin >> t;

    int distance = levenshteinDistance(s, t);
    std::cout << distance << std::endl;

    return 0;
}




