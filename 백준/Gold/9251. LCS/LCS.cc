#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int LCS(const string& S, const string& T) {
    int m = S.size();
    int n = T.size();

    // TODO 1: Initialize LCS matrix (n+1) x (m+1)
    vector<vector<int>> matrix(m+1, vector<int>(n+1, 0));

    // TODO 2: Implement LCS algorithm
    for(int i = 1; i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            if(S[i-1] == T[j-1]){
                matrix[i][j] = 1 + matrix[i-1][j-1];
            }

            else{
                matrix[i][j] = max(matrix[i][j-1], matrix[i-1][j]);
            }
        }
    }

    // TODO 3: Return the final answer
    return matrix[m][n];
}


int main() {
    string S;
    cin >> S;
    string T; 
    cin >> T;

    int result = LCS(S, T);
    cout << result << endl;

    return 0;
}




