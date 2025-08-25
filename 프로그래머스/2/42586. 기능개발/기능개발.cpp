#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    while(progresses.size() > 0){
        
        for(int i = 0; i < progresses.size(); ++i){
            progresses[i] += speeds[i];
        }
        
        int count = 0;
    
        for(int pro : progresses){
            if(pro >= 100){
                count++;
            }
            else{
                break;
            }
        }
        
        for(int j = 0; j < count; ++j){
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
        }
        
        if(count > 0){
            answer.push_back(count);
        }
    }
    
    return answer;
}