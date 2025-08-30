#include <algorithm>

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {        
        while(stones.size() > 1){
            int first = -1;
            int second = -1;

            for(int stone : stones){
                if(stone > second && stone > first){
                    second = first;
                    first = stone;
                }

                else if(stone > second){
                    second = stone;
                }

            }

            std::cout << first << second; 

            if(first == second){
                auto it1 = find(stones.begin(), stones.end(), first);
                stones.erase(it1);

                auto it2 = find(stones.begin(), stones.end(), second);
                stones.erase(it2);
            }

            else{
                auto it1 = find(stones.begin(), stones.end(), first);
                stones.erase(it1);

                auto it2 = find(stones.begin(), stones.end(), second);
                stones.erase(it2);

                stones.push_back(first - second);
            }         
        }

        if(stones.size() == 0){
            return 0;
        }
        else{
            return stones[0];
        }
    }
};