#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long mintime = 1;
    long long maxtime = pow(10,17);
    
    while(mintime < maxtime){
        long long possible_customer = 0;
        long long mid = (mintime + maxtime) / 2;
        
        for (int i = 0; i < times.size(); ++i) {
            long long count = mid/times[i];
            possible_customer += count;
            
            if(possible_customer >= n){
                maxtime = mid;
                break;
            }
        }
        
        if(possible_customer >= n){
                maxtime = mid;
        }
        
        else{
            mintime = mid + 1;
        } 
        
    }
    
    answer = mintime;
    
    return answer;
}