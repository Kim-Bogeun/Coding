#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int k) {
    int count = 0;
    
    priority_queue<int, vector<int>, greater<int>> minhp;
    
    for(int scov : scoville){
        minhp.push(scov);
    }
    
    while(minhp.size() > 1 && minhp.top() < k){
        int a = minhp.top();
        minhp.pop();
        int b = minhp.top();
        minhp.pop();
        
        minhp.push(a + 2*b);
        
        count++;
    }
    
    if(minhp.top() >= k){
        return count;
    }

    if(minhp.top() < k){
        return -1;
    }
}