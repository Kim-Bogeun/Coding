class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> num_idx;

        for(int i = 0; i < nums.size(); ++i){
            num_idx.push_back({nums[i], i});
        }

        sort(num_idx.begin(), num_idx.end(), [](auto& a, auto& b){
            return a.first > b.first;
        });

        vector<pair<int, int>> top(num_idx.begin(), num_idx.begin() + k);

        sort(top.begin(), top.end(), [](auto& a, auto& b){
            return a.second < b.second;
        });

        vector<int> result;
        for(auto& p : top){
            result.push_back(p.first);
        }

        return result;


    }
};