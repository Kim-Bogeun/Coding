class Solution {
public:
    int climbStairs(int n) {
        vector<int> remain(100, 0);

        remain[0] = 1;
        remain[1] = 1;

        if(n >= 2){
            for(int i = 2; i <= n; ++i){
                remain[i] = remain[i-1] + remain[i-2];
            }
        }

        return remain[n];
    }
};