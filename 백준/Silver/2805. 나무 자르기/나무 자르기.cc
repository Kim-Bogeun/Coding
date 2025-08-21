#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

long long solution(long long num, long long target, vector<long long> lengs){
    long long lo = 0;
    long long hi = *max_element(lengs.begin(), lengs.end());
    
    while(lo < hi){
        long long mid = lo + (hi - lo) / 2;
        
        long long sum = 0;
        
        for(auto leng:lengs){
            if(mid < leng){
                sum += leng - mid;
            }
        }
        
        if(sum >= target){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
        
    }
    
    return lo - 1;
}


int main()
{
    long long num;
    long long target;
    vector<long long> lengs;
    
    cin >> num >> target;
    lengs.resize(num);
    
    for (long long i = 0; i < num; ++i) cin >> lengs[i];
    
    long long answer = solution(num, target, lengs);
    
    cout << answer << endl;
    
    return 0;
}