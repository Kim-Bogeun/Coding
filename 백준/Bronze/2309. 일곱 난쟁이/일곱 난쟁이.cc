#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> heights;
    int h;

    for (int i = 0; i < 9; i++) {
        cin >> h;
        heights.push_back(h);
    }
    
    sort(heights.begin(), heights.end());
    
    int sum = 0;
    
    for(int height : heights){
        sum += height;
    }
    
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if(heights[i] + heights[j] - sum == -100){
                heights.erase(heights.begin() + j);
                heights.erase(heights.begin() + i);
                
                for (int height : heights) {
                    cout << height << endl;
                }   
                return 0;
            }
        }
    }
    return 0;
}