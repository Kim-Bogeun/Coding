#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {
    int n = numbers.size();
    
    if(n == 0){
        if(target == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int last = numbers[n-1];
    numbers.pop_back();
    
    return solution(numbers, target - last) +
           solution(numbers, target + last);
}