#include <iostream>
#include <string>
using namespace std;

int val(string s){
    int count = 0;
    
    for(char c : s){
        if(c == '('){
            count++;
        }
        else{
            count--;
        }
        
        if(count < 0){
            return 0;
        }
    }
    
    if(count == 0){
        return 1;
    }
    
    else{
        return 0;        
    }
}

int main() {
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        
        if(val(s) == 1){
            cout << "YES\n";
        }
        
        else{
            cout << "NO\n";
        }
    }
    return 0;
}