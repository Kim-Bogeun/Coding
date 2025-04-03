#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int d;
    int h_ratio;
    int w_ratio;
    
    cin >> d >> h_ratio >> w_ratio;

    float height;
    float width;  
    
    float ratio = d / sqrt(pow(h_ratio, 2) + pow(w_ratio, 2));

    height = ratio * h_ratio;
    width = ratio * w_ratio;

    cout << (int)height << " " << (int)width << endl;
    return 0;
}