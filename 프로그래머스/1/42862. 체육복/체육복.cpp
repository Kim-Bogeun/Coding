#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    set<int> reserve_only(reserve.begin(), reserve.end());
    set<int> lost_only(lost.begin(), lost.end());
 
    for(int x : lost){
        reserve_only.erase(x);
    }
    
    for(int x : reserve){
        lost_only.erase(x);
    }
    
    int happy = 0;
    
    for(int reserve : reserve_only){
        int front = reserve - 1;
        int back = reserve + 1;
        
        if(lost_only.find(front) != lost_only.end()){
            lost_only.erase(front);
            reserve_only.erase(reserve);
        }
        
        else if(lost_only.find(back) != lost_only.end()){
            lost_only.erase(back);
            reserve_only.erase(reserve);
        }
    }   
    
    return n - lost_only.size();
}