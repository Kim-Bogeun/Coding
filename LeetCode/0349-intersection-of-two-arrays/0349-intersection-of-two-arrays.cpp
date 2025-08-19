#include <set>
#include <vector>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> inter;
        set<int> set1;
        set<int> set2;

        for(int num : nums1){
            if(set1.find(num) != set1.end()){
                continue;
            }
        set1.insert(num);
        }

        for(int num : nums2){
            if(set1.find(num) != set1.end()){
                inter.insert(num);
            }
        }

        return vector<int>(inter.begin(), inter.end());
    }

    
};