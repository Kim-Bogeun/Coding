# include<iostream>
# include<string>
# include<cmath>

using namespace std;

int main(){
    string numchar;

    cin >> numchar;

    int result = 0;

    for(size_t i = 0; i<numchar.length(); i++){
        char k = numchar[numchar.length() - 1 - i];
        int j = pow(16,i);
        int value;
        
        switch (k) {
            case '0': value = 0; break;
            case '1': value = 1; break;
            case '2': value = 2; break;
            case '3': value = 3; break;
            case '4': value = 4; break;
            case '5': value = 5; break;
            case '6': value = 6; break;
            case '7': value = 7; break;
            case '8': value = 8; break;
            case '9': value = 9; break;
            case 'A': value = 10; break;
            case 'B': value = 11; break;
            case 'C': value = 12; break;
            case 'D': value = 13; break;
            case 'E': value = 14; break;
            case 'F': value = 15; break;
        }
        result += value * j;
    
    }
    cout << result << endl;
}
