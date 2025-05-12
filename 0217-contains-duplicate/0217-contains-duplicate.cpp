#include <set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> dup;

        for(int num : nums){
            if(dup.find(num) != dup.end()){
                return true;
            }
        dup.insert(num);
        }

    return false;
    }
};