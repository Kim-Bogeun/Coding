#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums(5);
    for (int i = 0; i < 5; ++i) {
        cin >> nums[i];
    }

    int n = 1;
    while (true) {
        int count = 0;
        for (int i = 0; i < 5; ++i) {
            if (n % nums[i] == 0) {
                count++;
            }
        }

        if (count >= 3) {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}