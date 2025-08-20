#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int, int> pock;
    
    for(int i = 0; i < nums.size(); ++i){
        pock[nums[i]]++;
    }
    
    int answer = min(pock.size(), nums.size()/2);
    return answer;
}